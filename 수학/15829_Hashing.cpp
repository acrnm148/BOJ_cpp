#include<iostream>
#include<string>
#define M 1234567891
using namespace std;
int main() {
	int N;
	string str;
	long long sum = 0;
	long long r = 1;
	scanf("%d", &N);
	cin >> str;
	for (int i = 0; i < N; i++) {
		sum += ((str[i] - 96) * r) % M;
		r = r * 31;
		r = r % M;
	}
	cout << sum % M << "\n";
}