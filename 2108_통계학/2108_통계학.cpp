#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int N, *arr, ans2, ans3, ans4, sum,max;
	int cnt = 0, num = -1;
	bool state = false;
	double ans1;
	scanf("%d", &N);
	vector<pair<int, int>> v(N);
	for (int i = 0; i < N; i++) {
		v[i].first = 500001, v[i].second = 4001;
	}
	arr = new int[N];
	for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
	//ans1
	sum = 0;
	for (int i = 0; i < N; i++) sum += arr[i];
	ans1 = (double)sum / N;
	ans1 = round(ans1);
	//ans2
	sort(arr, arr + N);
	ans2 = (int)arr[N / 2];
	//ans3
	for (int i = 0; i < N; i++) {
		num++;
		if (arr[i] == arr[i + 1]) {
			cnt++;
			v[num].second = arr[i];
			v[num].first = cnt;
		}
		else cnt = 0;
	}
	sort(v.begin(), v.end());
	if (v[0].first != 500001) {
		for (int i = 0; i < num; i++) {
			if (v[i].first == v[i + 1].first) state = true;
		}
		if (v[num].first == v[num-1].first) ans3 = v[1].second;
		else ans3 = v[num].second;
	}
	/*
	if (v[0].first != 500001) {
		if (v[num].first == v[num - 1].first) {
			for (int i = 0; i <= num; i++) {
				if (v[i].first == v[num].first) {
					cnt++;
					if (cnt == 2) ans3 = v[i].second;
				}
			}
		}
		else ans3 = v[num].second;
	}
	*/
	else {
		if (N != 1) ans3 = arr[1];
		else ans3 = arr[0];
	}
	//7 1112233 최빈값 오류 : 2 (정답:1)
	//ans4
	sum = arr[N - 1] - arr[0];
	if (sum < 0) sum*(-1);
	ans4 = sum;
	cout << ans1 << "\n" << ans2 << "\n" << ans3 << "\n" << ans4 << "\n";
}