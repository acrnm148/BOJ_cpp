#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int N, M, start;
	int arr[51][51] = {0, };
	cin >> N >> M;
	for (int y = 0; y < N; y++)
	{
		cin >> str;
		for (int x = 0; x < M; x++)
		{
			if (str[x] == 'B')
				arr[y][x] = 0;
			else if (str[x] == 'W')
				arr[y][x] = 1;
		}
	}
	start = arr[0][0];
	//test
	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < M; x++)
			cout << arr[y][x] << " ";
		cout << "\n";
	}
}