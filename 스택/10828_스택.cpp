#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main() {
	stack <int> s;
	int T, num;
	string cmd;
	scanf("%d", &T);
	while (T--) {
		cin >> cmd;
		if (cmd == "push") {
			scanf("%d", &num);
			s.push(num);
		}
		else if (cmd == "top") {
			if (s.empty() == 1) cout << "-1\n";
			else cout<<s.top()<<"\n";
		}
		else if (cmd == "pop") {
			if (s.empty() == 1) cout << "-1\n";
			else {
				cout << s.top() << "\n";
				s.pop();
			}
		}
		else if (cmd == "size") {
			cout << s.size() << "\n";
		}
		else if (cmd == "empty") {
			cout << s.empty() << "\n";
		}
	}
}