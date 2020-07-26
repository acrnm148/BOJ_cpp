#include<iostream>
#include<algorithm>
#include<vector>
#pragma warning(disable: 4996)
using namespace std;

int main() {
	int N, M, state = 0;
	int mid, left = 0, right;
	long long result, tmp;
	scanf("%d", &N);
	right = N - 1;
	vector<long long> A;
	for (int i = 0; i < N; i++) {
		scanf("%lld", &tmp);
		A.push_back(tmp);
	}
	sort(A.begin(), A.end());
	scanf("%d", &M);
	vector<long long> B;
	for (int i = 0; i < M; i++) {
		scanf("%lld", &tmp);
		B.push_back(tmp);
	}

	for (int i = 0; i < M; i++) {
		state = 0;
		left = 0;
		right = N - 1;
		while (left <= right) {
			mid = (left + right) / 2;
			if (A[mid] > B[i]) { right = mid - 1; }
			else if (A[mid] < B[i]) { left = mid + 1; }
			else { state = 1; break; }
		}
		cout << state << "\n";
	}
}