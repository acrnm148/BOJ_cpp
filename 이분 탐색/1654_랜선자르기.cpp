#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
	int K, N;
	long long left = 1, right = 1;
	long long mid, *array, sum, result = 1;

	scanf("%d %d", &K, &N);
	array = new long long[N];

	for (int i = 0; i < K; i++) {
		scanf("%lld", &array[i]);
		if (right < array[i]) right = array[i];
	}

	//ÀÌÁøÅ½»ö
	while (left <= right) {
		sum = 0;
		mid = (left + right) / 2;

		for (int i = 0; i < K; i++) {
			sum += array[i] / mid;
		}

		if (sum >= N) {
			result = mid;
			left = mid + 1;
		}
		else right = mid - 1;
	}
	cout << result << endl;
}