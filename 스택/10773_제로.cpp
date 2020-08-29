#include<iostream>
#include<stack>
using namespace std;
int main() {
	stack <int> s;
	int T, num, sum = 0, cnt = 0;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &num);
		s.push(num);
	}
	for (int i = 0; i < T; i++) {
		if (s.top() == 0) {
			s.pop();
			cnt++;
		}
		else if (s.top() != 0 && cnt > 0) {
			s.pop();
			cnt--;
		}
		else {
			sum += s.top();
			s.pop();
		}
	}
	cout << sum << "\n";
}