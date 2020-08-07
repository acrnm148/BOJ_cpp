#include<iostream>
#include<string>
using namespace std;
int main() {
	int T, R;
	string word, result;
	scanf("%d", &T);
	while (T--) {
		result = "";
		cin >> R >> word;
		for (int i = 0; i < word.length(); i++) {
			for (int j = 0; j < R; j++) {
				result += word[i];
			}
		}
		cout << result << "\n";
	}
}