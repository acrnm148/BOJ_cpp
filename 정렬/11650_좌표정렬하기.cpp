#include<iostream>
#include<algorithm>
#include<vector>
#pragma warning(disable: 4996)
using namespace std;
int main() {
	int N, tmp1, tmp2;
	scanf("%d", &N);
	vector<pair<int, int>> vdot(N);
	for (int i = 0; i < N; i++)scanf("%d %d", &vdot[i].first, &vdot[i].second);
	sort(vdot.begin(), vdot.end());
	for (int i = 0; i < N; i++) cout << vdot[i].first << " " << vdot[i].second << "\n";
}