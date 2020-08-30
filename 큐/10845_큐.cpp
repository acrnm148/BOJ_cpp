#include<iostream>
#include<queue>
#include<string>
using namespace std;
int main() {
	queue<int> q;
	int T, num;
	string str;
	scanf("%d", &T);
	while (T--) {
		cin >> str;
		if (str == "push") {
			scanf("%d", &num);
			q.push(num);
		}
		else if (str == "pop") {
			if (q.empty()==1) {
				cout << "-1\n";
			}
			else {
				cout << q.front()<<"\n";
				q.pop(); 
			}
		}
		else if (str == "front") {
			if (q.empty() == 1) {
				cout << "-1\n";
			}
			else {
				cout << q.front() << "\n";
			}
		}
		else if (str == "back") {
			if (q.empty() == 1) {
				cout << "-1\n";
			}
			else {
				cout << q.back() << "\n";
			}
		}
		else if (str == "size") {
			cout << q.size() << "\n";
		}
		else if (str == "empty") {
			cout << q.empty() << "\n";
		}
	}
}