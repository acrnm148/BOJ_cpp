#include<iostream>
using namespace std;
int main() {
	int N, lastNum, newNum, num;
	bool state = true;
	lastNum = 1;
	newNum = 1;
	num = 0;
	scanf("%d", &N);
	while (state) {
		lastNum = newNum;
		newNum += 6 * num;
		if (N >= lastNum && N <= newNum) state = false;
		else num++;
	}
	cout << num + 1 << "\n";
}