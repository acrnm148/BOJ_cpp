#include <iostream>

using namespace std;

int arr[129][129];
int cnt;
int blue_cnt, white_cnt;

void find(int x, int y, int N)
{
	int blue = 0;
	int white = 0;
	for (int i = y; i < y + N; i++)
	{
		for (int j = x; j < x + N; j++)
		{
			if (arr[i][j] == 1)
				blue++;
			else
				white++;
			if (blue > 0 && white > 0)
				break;
		}
		if (blue > 0 && white > 0)
			break;
	}
	if (blue > 0 && white > 0)
	{
		N /= 2;
		find(x, y, N);
		find(x + N, y, N);
		find(x, y + N, N);
		find(x + N, y + N, N);
	}
	else
	{
		if (blue == 0)
			white_cnt++;
		else if (white == 0)
			blue_cnt++;
	}
}

int main()
{
	int N;
	cin >> N;
	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < N; x++)
			cin >> arr[y][x];
	}
	find(0, 0, N);
	cout << white_cnt << "\n" << blue_cnt;
}