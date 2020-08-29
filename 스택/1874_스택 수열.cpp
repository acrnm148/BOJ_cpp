#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main() {
	stack<int> s;
	stack<int> num;
	vector<char> v;
	int T, input;
	bool state = true;
	scanf("%d", &T);
	for (int i = T; i >= 1; i--) num.push(i);
	s.push(0);
	while (T--) {
		scanf("%d", &input);
		if (state == true) {
			if (input > s.top()) {
				for (int i = num.top(); i < input + 1; i++) {
					s.push(num.top());
					num.pop();
					v.push_back('+');
				}
				s.pop();
				v.push_back('-');
			}
			else if (input == s.top()) {
				s.pop();
				v.push_back('-');
			}
			else {
				state = false;
			}

		}
	}
	if (state == true) {
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << "\n";
	}
	else cout << "NO\n";
}