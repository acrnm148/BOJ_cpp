#include<iostream>
using namespace std;
int main() {
	int A, num, cnt = 0, originA, state = 1;
	scanf("%d", &A);
	if (A < 10) A *= 10;
	originA = A;
	while (state) {
		num = ((A / 10 + A % 10) % 10) + (A % 10 * 10);
		if (num == originA) state = 0;
		A = num;
		cnt++;
	}
	cout << cnt << "\n";
}