#include<iostream>
#include<string>
#include<bitset>
using namespace std;

int M, BIT, num;
string cmd;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> M;
	while (M--) {
		cmd.clear();
		cin >> cmd;
		if (cmd == "add") {
			cin >> num;
			BIT |= (1 << num);
		}
		else if (cmd == "remove") {
			cin >> num;
			BIT &= ~(1 << num);
		}
		else if (cmd == "check") {
			cin >> num;
			if (BIT & (1 << num)) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (cmd == "toggle") {
			cin >> num;
			BIT ^= (1 << num);
		}
		else if (cmd == "all") {
			BIT = (1 << 21) - 1;
		}
		else if (cmd == "empty") {
			BIT = 0;
		}
	}
}
