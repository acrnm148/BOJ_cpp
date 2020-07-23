#include<iostream>
using namespace std;

int main() {
	int input = 0;

	cin >> input;

	if (input % 4 == 0 && input % 100 != 0) cout << "1";
	else if (input % 400 == 0) cout << "1";
	else cout << "0" << endl;
}