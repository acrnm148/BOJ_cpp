#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool Comp(string s1, string s2) {
	if (s1.length() == s2.length()) return s1 < s2;
	else return s1.length() < s2.length();
}

int main() {
	int N;
	string array[20000];

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}

	sort(array, array + N, Comp);

	for (int i = 0; i < N; i++) {
		if (array[i] == array[i + 1]) {
			array[i] = "out";
		}
		
		if (array[i] != "out") cout << array[i] << endl;
	}
}