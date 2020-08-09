#include<iostream>
#pragma warning(disable: 4996)
using namespace std;
int main() {
	int A, B, V;
	scanf("%d %d %d", &A, &B, &V);
	cout << (V - B - 1) / (A - B) + 1 << "\n";
}