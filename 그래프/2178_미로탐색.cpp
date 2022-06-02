#include <iostream>
#include <string>
#include <queue>
using namespace std;

int dir_x[4] = {1, 0, -1, 0};
int dir_y[4] = {0, -1, 0, 1};
int N, M;
int arr[101][101];

void BFS(int y, int x)
{
	queue<pair<int, int>> q;
	q.push(make_pair(y, x));
	while (1)
	{
		int new_y = q.front().first;
		int new_x = q.front().second;
		q.pop();
		if (new_y == N && new_x == M)
			break;
		for (int i = 0; i < 4; i++)
		{
			int next_y = new_y + dir_y[i];
			int next_x = new_x + dir_x[i];
			if (next_y >= 1 && next_y <= N && next_x >= 1 && next_x <= M)
			{
				if (arr[next_y][next_x] == 1 && !(next_y == 1 && next_x == 1))
				{
					arr[next_y][next_x] = arr[new_y][new_x] + 1;
					q.push(make_pair(next_y, next_x));
				}
			}
		}
	}
}

int main()
{
	int res;
	string str;
	cin >> N >> M;
	for (int y = 1; y <= N; y++)
	{
		str = "";
		cin >> str;
		for (int x = 0; x < M; x++)
			arr[y][x + 1] = str[x] - '0';
	}
	BFS(1,1);
	cout << arr[N][M];
}