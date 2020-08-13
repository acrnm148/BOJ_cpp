#include<iostream>
#include<vector>
#define last 10000
using namespace std;
int main() {
	int a, b, max, min, aTmp, bTmp;
	max = 0;
	min = 0;
	vector <int> arr;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= 10000; i++) {
		if (!(a / i > 0 && b / i > 0)) break;
		if (a%i == 0 && b%i == 0) arr.push_back(i);
	}
	max = arr.back();
	aTmp = a / max;
	bTmp = b / max;
	min = aTmp * bTmp*max;
	cout << max << "\n" << min << "\n";
}