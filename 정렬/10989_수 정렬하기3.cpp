#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 10002
int main() {
	int N, num;
	int arr[MAX] = { 0, };
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		scanf("%d", &num);
		arr[num]++;
	}
	for (int i = 1; i <= 10000; i++) {
		if (arr[i] > 0) {
			while (arr[i] > 0) {
				cout << i<<"\n";
				arr[i]--;
			}
		}
	}
}