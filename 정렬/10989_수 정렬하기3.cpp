#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, idx;
	int cnt[10001] = {};
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> idx;
		cnt[idx] += 1;
	}

	for (int i = 1; i <= 10000; i++)
	{
		for (int j = 1; j <= cnt[i]; j++)
		{
			cout << i << "\n";
		}
	}
}