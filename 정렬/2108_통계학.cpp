#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
	int N, *arr, *mode, cnt, A2, A3, A4, num, max;
	double A1, sum = 0;
	bool state = false;

	cnt = 0;
	scanf("%d", &N);
	arr = new int[N];
	mode = new int[N];

	for (int i = 0; i < N; i++) {
		mode[i] = 0;
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	A1 = round(sum / N);
	sort(arr, arr + N);
	A2 = arr[N / 2];
	A4 = abs(arr[N - 1] - arr[0]);

	for (int i = 0; i < N - 1; i++) {
		if (arr[i] == arr[i + 1]) {
			if (state == false) num = i;
			mode[num]++;
			state = true;
		}
		else state = false;
	}
	max = mode[0];
	for (int i = 0; i < N; i++) {
		if (max < mode[i]) max = mode[i];
	}
	for (int i = 0; i < N; i++) {
		if (mode[i] == max) { 
			cnt++; 
			num = i; }
	}
	if (cnt > 1) {
		cnt = 0;
		for (int i = 0; i < N; i++) {
			if (mode[i] == max) {
				cnt++;
				if (cnt == 2) A3 = arr[i];
			}
		}
	}
	else A3 = arr[num];
	cout << A1 << "\n" << A2 << "\n" << A3 << "\n" << A4 << "\n";
}