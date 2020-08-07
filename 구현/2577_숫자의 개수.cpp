#include<iostream>
#include<string>
using namespace std;
int main() {
	int A, B, C, array[10] = { 0 };
	string multiple;
	scanf("%d %d %d", &A, &B, &C);
	multiple = to_string((A*B)*C);
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < multiple.length(); j++) {
			if (multiple[j] == i + 48) array[i]++;
		}
	}
	for (int i = 0; i < 10; i++) cout << array[i] << "\n";
}