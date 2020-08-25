#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main() {
	int C, *arr, num;
	double avg,cnt;
	scanf("%d", &C);
	while (C--) {
		cnt = 0;
		avg = 0;
		scanf("%d", &num);
		arr = new int[num];
		for (int i = 0; i < num; i++) {
			scanf("%d", &arr[i]);
			avg += (double)arr[i];
		}
		avg = avg / (double)num;
		for (int i = 0; i < num; i++) {
			if (arr[i] > avg) cnt++;
		}
		cout << fixed;
		cout.precision(3);
		cout << (cnt / num) * 100 << "%\n";
	}
}