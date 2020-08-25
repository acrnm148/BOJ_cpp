#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main() {
	int N, *arr, ans2, ans3, ans4, arr_first;
	int cnt = 0, num = -1, max = 0, sum = 0, state = 0;
	double ans1;
	scanf("%d", &N);
	arr = new int[N];
	for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
	arr_first = arr[0];
	//ans1
	for (int i = 0; i < N; i++) sum += arr[i];
	ans1 = (double)sum / N;
	ans1 = round(ans1);
	//ans2
	sort(arr, arr + N);
	ans2 = (int)arr[N / 2];
	//ans3
	if (N == 1) ans3 = arr_first;
	else {
		for (int i = 0; i < N - 1; i++) {
			if (arr[i] == arr[i + 1]) cnt++;
			else cnt = 0;
			if (cnt > max) {
				ans3 = arr[i];
				max = cnt;
			}
			else if (cnt == max) {
				if (cnt == 0) ans3 = arr_first;
				else if (cnt != 0 && state == 0) {
					ans3 = arr[i];
					max = cnt;
					state++;
				}
			}
		}
	}
	//ans4
	sum = arr[N - 1] - arr[0];
	if (sum < 0) sum*(-1);
	ans4 = sum;
	cout << ans1 << "\n" << ans2 << "\n" << ans3 << "\n" << ans4 << "\n";
}