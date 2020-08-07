#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#pragma warning(disable: 4996)
int main(void) {
	string word;
	int arr[26] = { 0 };
	int max;
	char spell = 65;
	cin >> word;
	int length = word.length();
	for (int i = 0; i < length; i++) {
		for (char j = 0; j < 26; j++) {
			if (word[i] == j + 65 || word[i] == j + 97) {
				arr[j] += 1;
			}
		}
	}
	max = arr[0];
	for (int i = 0; i < 26; i++) {
		if (i != 0) { 
			if (arr[i] == max) spell = '?'; 
		}
		if (arr[i] > max) {
			max = arr[i];
			spell = i + 65;
		}
	}
	cout << spell << "\n";
}