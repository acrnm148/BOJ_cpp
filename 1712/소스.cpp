#include<iostream>
using namespace std;

int main() {
	long long A, B, C;
	int count = 0;

	cin >> A >> B >> C;

	if (B >= C) {
		cout << "-1";
	}
	else cout << A / (C - B) + 1;
}