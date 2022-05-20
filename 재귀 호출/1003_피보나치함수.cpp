#include <iostream>

using namespace std;

int main()
{
	int arr[41] = {0,1,1};
	int T, N;
	cin >> T;
	for (int i = 3; i <= 40; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
	while (T--)
	{
		cin >> N;
		if (N == 0)
			cout << 1 << " " << 0 << "\n";
		else
			cout << arr[N - 1] << " " << arr[N] << "\n";
	}
}