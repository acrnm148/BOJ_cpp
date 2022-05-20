#include <iostream>
#include <cstring>
using namespace std;

int N, M;
int arr[51][51];
int dir_x[4] = {0, 1, 0, -1};
int dir_y[4] = {1, 0, -1, 0};

void DFS(int x, int y)
{
	int idx_x, idx_y;
	arr[y][x] = 3;
	for (int i = 0; i < 4; i++)
	{
		idx_x = x + dir_x[i];
		idx_y = y + dir_y[i];
		if (idx_x >= 0 && idx_x < M && idx_y >= 0 && idx_y < N)
		{
			if (arr[idx_y][idx_x] == 1)
				DFS(idx_x, idx_y);
		}
	}
}

int main()
{
	int T, K;
	int i, j, cnt;
	cin >> T;
	while (T--)
	{
		cnt = 0;
		cin >> M >> N >> K;
		while(K--)
		{
			cin >> i >> j;
			arr[j][i] = 1;
		}
		for (int y = 0; y < N; y++)
		{
			for (int x = 0; x < M; x++)
			{
				if (arr[y][x] == 1)
				{
					cnt++;
					DFS(x, y);
				}
			}
		}
		cout << cnt << "\n";
		for (int y = 0; y < N; y++)
			memset(arr[y], 0, sizeof(arr[y]));
	}
}