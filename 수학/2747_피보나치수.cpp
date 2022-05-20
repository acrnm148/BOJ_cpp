#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int arr[50] = {0, 1, 1};
	for (int i = 3; i <= N; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
	cout << arr[N];
}