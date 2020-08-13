#include<iostream>
#include<algorithm>
#include<vector>
#pragma warning(disable: 4996)
using namespace std;
int main(void) {
	cin.sync_with_stdio(false);
	int N;
	scanf("%d", &N);
	vector<pair<int, int>> vdot(N);
	for (int i = 0; i < N; i++)scanf("%d %d", &vdot[i].second, &vdot[i].first);
	sort(vdot.begin(), vdot.end());
	for (int i = 0; i < N; i++) cout << vdot[i].second << " " << vdot[i].first << "\n";
}