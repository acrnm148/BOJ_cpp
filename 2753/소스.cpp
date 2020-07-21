#include<iostream>
using namespace std;

int main() {
	int N = 0;
	int *array;
	int min, max;

	cin >> N;

	array = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}

	min = array[0];
	max = array[0];

	for (int i = 0; i < N; i++) {
		if (min > array[i]) min = array[i];
		if (max < array[i]) max = array[i];
	}

	cout << min << " " << max;
}