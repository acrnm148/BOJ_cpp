#include<iostream>
using namespace std;
int fact(int num) {
	if (num <= 1) return 1;
	else return num * fact(num - 1);
}

int main() {
	int a, b, result;
	scanf("%d %d", &a, &b);
	result = fact(a) / (fact(b)*fact(a - b));
	cout << result << "\n";
}