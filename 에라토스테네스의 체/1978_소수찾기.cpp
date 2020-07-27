#include<iostream>
#include<algorithm>
using namespace std;
#define max 1001
int main() {
	int N, count = 0;
	int *arr;
	scanf("%d", &N);
	arr = new int[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 1) arr[i] = 0;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 2; j < max; j++) {
			if (arr[i] != j && arr[i] % j == 0) arr[i] = 0;
		}
		if (arr[i] != 0)count++;
	}

	cout << count << endl;
}