#include<iostream>
#include<string>
using namespace std;
int main() {
	int T, num, sum;
	string result;
	scanf("%d", &T);
	while (T--) {
		sum = 0;
		num = 0;
		cin >> result;
		for (int i = 0; i < result.length(); i++) {
			if (result[i] == 'O') {
				num++;
			}
			else num = 0;
			sum += num;
		}
		cout << sum << "\n";
	}
}