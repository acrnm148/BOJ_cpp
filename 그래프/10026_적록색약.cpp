#include <iostream>
#include <string>
#include <queue>
#include <cstring>
using namespace std;

int dir_x[4] = {1, 0, -1, 0};
int dir_y[4] = {0, -1, 0, 1};
int arr[101][101];
int visited[101][101];
int N, now;
int cnt = 1;
queue<pair<int, int>> q;

void BFS(int y, int x)
{
	q.push(make_pair(y, x));
	while (!q.empty())
	{
		int new_y = q.front().first;
		int new_x = q.front().second;
		visited[new_y][new_x] = cnt;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int next_y = new_y + dir_y[i];
			int next_x = new_x + dir_x[i];
			if (next_y >= 0 && next_y < N && next_x >= 0 && next_x < N)
			{
				if (arr[next_y][next_x] == now && visited[next_y][next_x] == 0)
				{
					q.push(make_pair(next_y, next_x));
					visited[next_y][next_x] = cnt; //큐에서 두 번 방문하는걸 방지, 두 번 방문하게 되면 메모리 초과
													//어차피 방문할거라서 넣어줘도 괜찮다
				}
			}
		}
	}
}

int main()
{
	int cnt_o, cnt_x;
	string str;
	cin >> N;
	
	//적록색약x 검사
	for (int y = 0; y < N; y++)
	{
		str = "";
		cin >> str;
		for (int x = 0; x < N; x++)
		{
			if (str[x] == 'R')
				arr[y][x] = 1;
			else if (str[x] == 'G')
				arr[y][x] = 2;
			else if (str[x] == 'B')
				arr[y][x] = 3;
		}
	}
	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < N; x++)
		{
			if (visited[y][x] == 0)
			{
				now = arr[y][x];
				BFS(y, x);
				cnt++;
			}
		}
	}
	cnt_x = cnt;

	//적록색약o 검사
	cnt = 1;
	for (int i = 0; i < N; i++)
		memset(visited[i], 0, sizeof(arr[i]));
	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < N; x++)
		{
			if (arr[y][x] == 2)
				arr[y][x] = 1;
		}
	}
	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < N; x++)
		{
			if (visited[y][x] == 0)
			{
				now = arr[y][x];
				BFS(y, x);
				cnt++;
			}
		}
	}
	cnt_o = cnt;
	//결과
	cout << cnt_x - 1<< " " << cnt_o - 1;
}