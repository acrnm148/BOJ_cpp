#include<iostream>
#include<string>
using namespace std;
int main() {
	string word;
	int array[26];
	for (int i = 0; i < 26; i++) array[i] = -1;
	cin >> word;
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < word.length(); j++) {
			if (array[i] == -1) {
				if (word[j] == i + 97) {
					array[i] = j;
				}
			}
		}
	}
	for (int i = 0; i < 26; i++) cout << array[i] << " ";
}