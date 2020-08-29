#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	int T, length;
	bool state = false;
	scanf("%d", &T);
	while (T--) {
		cin >> str;
		length = str.length();
		for (int i = 0; i < length; i++) {
			state = false;
			for (int j = i; j < length; j++) {
				if (str[i] == '('&&state == false) {
					if (str[j] == ')') {
						str[i] = 0;
						str[j] = 0;
						state = true;
					}
				}
			}
		}
		for (int i = 0; i < length; i++) {
			if (str[i] != 0) {
				state = false; 
				break;
			}
			else state = true;
		}
		if (state == true) cout << "YES\n";
		else cout << "NO\n";
	}
}