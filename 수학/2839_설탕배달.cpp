#include<iostream>
using namespace std;
int main() {
	int N, result, tmp, num;
	scanf("%d", &N);
	tmp = 0;
	num = N;
	if (N % 15 == 0) result = N / 5;
	else if (N >= 5) {
		for (int i = 1; i <= N / 5; i++) {
			num = num - 5;
			if (num % 3 == 0) tmp = num;
		}
		result = tmp / 3 + (N - tmp) / 5;
		if (tmp == 0) {
			if (N % 3 == 0) result = N / 3;
			else if (N % 5 == 0) result = N / 5;
			else result = -1;
		}
	}
	else if (N == 3) result = 1;
	else result = -1;

	cout << result << "\n";
}
