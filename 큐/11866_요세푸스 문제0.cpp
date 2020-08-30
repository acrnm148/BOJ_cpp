#include<iostream>
#include<queue>
using namespace std;
int main() {
	queue<int> q;
	int N, K;
	scanf("%d %d", &N, &K);
	for (int i = 1; i <= N; i++) q.push(i);
	cout << "<";
	while (!q.empty()) {
		for (int i = 0; i < K - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		q.pop();
		if (q.empty() == 0) cout << ", ";
	}
	cout << ">";
}