#include<iostream>
using namespace std;
int main() {
	int M, N;
	scanf("%d %d", &M, &N);
	long long *arr = new long long[N + 1];
	for (int i = 0; i < N + 1; i++) arr[i] = i;
	for (long long i = 2; i*i <= N; i++) {
		for (long long j = i + i; j <= N; j += i) {
			if (arr[j] == 0) continue;
			arr[j] = 0;
		}
	}
	for (int i = M; i <= N; i++) {
		if (arr[i] != 0 && arr[i] != 1) cout << arr[i] << "\n";
	}
}