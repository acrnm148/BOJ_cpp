#include<iostream>
using namespace std;
#pragma warning(disable: 4996)
#define max 1000000
int main() {
	int N, tmp, result, M[10] = { 0, }, num, cnt = 0;
	scanf("%d", &N);
	for (int i = 1; i < max; i++) {
		result = i;
		num = i;
		while (num > 0) {
			tmp = num % 10;
			result += tmp;
			num = num / 10;
			if (num==0 && result == N) {
				M[cnt] = i;
				cnt++;
			}
		}
	}
	cout << M[0] << "\n";
}