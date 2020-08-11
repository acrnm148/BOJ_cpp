#include<iostream>
using namespace std;
#define max 100000
int main() {
	int cnt, num, *arr, sum, min = 0, result;
	scanf("%d %d", &cnt, &num);
	arr = new int[cnt];
	for (int i = 0; i < cnt; i++) scanf("%d", &arr[i]);
	min = abs(arr[0] + arr[1] + arr[2]);
	for (int a = 0; a < cnt; a++) {
		sum = 0;
		sum += arr[a];
		for (int b = 0; b < cnt; b++) {
			if (a == b) continue;
			sum += arr[b];
			for (int c = 0; c < cnt; c++) {
				if (a == c || b == c) continue;
				sum += arr[c];
				if (sum - num <= 0 && min >= abs(sum - num)) {
					min = abs(sum - num);
					result = sum;
				}
				sum -= arr[c];
			}
			sum -= arr[b];
		}
	}
	cout << result << "\n";
}