#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<int> q;
	int N, K;
	int start;
	int sec = 0;
	int arr[100001] = {0, }; //중복성 검사
	cin >> N >> K;
	q.push(N);
	arr[N] = 1;
	while (1)
	{
		start = q.front();
		q.pop();
		if (start - 1 >= 0 && arr[start - 1] == 0)
		{
			arr[start - 1] = arr[start] + 1;
			q.push(start - 1);
		}
		if (start + 1 <= 100000 && arr[start + 1] == 0)
		{
			arr[start + 1] = arr[start] + 1;
			q.push(start + 1);
		}
		if (start * 2 <= 100000 && arr[start * 2] == 0)
		{
			arr[start * 2] = arr[start] + 1;
			q.push(start * 2);
		}
		if (arr[K] != 0)
		{
			cout << arr[K] - 1;
			break;
		}
	}
}