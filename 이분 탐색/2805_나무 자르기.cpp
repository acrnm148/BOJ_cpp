#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	long long N, M, *arr, left, right, mid, sum, height;
	scanf("%ld %ld", &N, &M);
	arr = new long long[N];
	for (int i = 0; i < N; i++) scanf("%ld", &arr[i]);
	sort(arr, arr + N);
	left = 0;
	right = arr[N - 1];
	while (left <= right) {
		sum = 0;
		mid = (left + right) / 2;
		for (int i = 0; i < N; i++) {
			height = mid;
			if (arr[i] >= mid) sum += arr[i] - mid;
		}
		if (sum == M)  break;
		else {
			if (left==right) {
				if (sum > M) break;
				else if (sum < M) { height = mid - 1; break; }
			}
			else {
				if (sum < M) { right = mid - 1; }
				else if (sum > M) { left = mid + 1; }
			}
		}
	}
	cout << height << "\n";
}