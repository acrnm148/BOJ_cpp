#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
	string str;
	int count=0, length;
	getline(cin, str);
	length = str.length();
	for (int i = 0; i < length; i++) {
		if (str[i] == ' ') {
			if (i != 0) count++;
		}
	}
	if (str[length - 1]!=' ') {
		count++;
	}
	cout << count << endl;
}