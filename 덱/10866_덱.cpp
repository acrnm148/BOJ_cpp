#include<iostream>
#include<deque>
#include<string>
using namespace std;
int main() {
	deque<int> d;
	int N, num;
	string cmd;
	scanf("%d", &N);
	while (N--) {
		cin >> cmd;
		if (cmd == "push_front") {
			scanf("%d", &num);
			d.push_front(num);
		}
		else if (cmd == "push_back") {
			scanf("%d", &num);
			d.push_back(num);
		}
		else if (cmd == "pop_front") {
			if (d.empty() == 1) cout << "-1\n";
			else {
				cout << d.front() << "\n";
				d.pop_front();
			}
		}
		else if (cmd == "pop_back") {
			if (d.empty() == 1) cout << "-1\n";
			else {
				cout << d.back() << "\n";
				d.pop_back();
			}
		}
		else if (cmd == "size") {
			cout << d.size() << "\n";
		}
		else if (cmd == "empty") {
			cout << d.empty() << "\n";
		}
		else if (cmd == "front") {
			if (d.empty() == 1) cout << "-1\n";
			else cout << d.front() << "\n";
		}
		else if (cmd == "back") {
			if (d.empty() == 1) cout << "-1\n";
			else cout << d.back() << "\n";
		}
	}
}