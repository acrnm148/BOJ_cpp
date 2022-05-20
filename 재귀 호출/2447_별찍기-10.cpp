#include <iostream>

using namespace std;

char arr[7000][7000];
int N;

void star(int x, int y, int num, int check)
{
	int mid_check = 1;
	if (check == 0)
		mid_check = 0;
	if (num > 3)
	{	
		num/=3;
		star(x, y, num, mid_check);
		star(x + num, y, num, mid_check);
		star(x + num * 2, y, num, mid_check);

		star(x, y + num, num, mid_check);
		star(x + num, y + num, num, 0);
		star(x + num * 2, y + num, num, mid_check);

		star(x, y + num * 2, num, mid_check);
		star(x + num, y + num * 2, num, mid_check);
		star(x + num * 2, y + num * 2, num, mid_check);
	}
	else
	{
		int cnt = 0;
		for (int i = y; i < y + num; i++)
		{
			for (int j = x; j < x + num; j++)
			{
				if (check == 0 || cnt==4)
					arr[i][j] = ' ';
				else
					arr[i][j] = '*';
				cnt++;
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> N;
	int num = N;
	star(0, 0, num, 1);
	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < N; x++)
			cout << arr[y][x];
		cout << "\n";
	}
}