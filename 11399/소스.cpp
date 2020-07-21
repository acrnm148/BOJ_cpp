#include<iostream>
using namespace std;

void main() {

	//사람 수 N 입력
	int N;
	while (1)
	{
		cin >> N;
		if (N >= 1 && N <= 1000) break;
	}

	//각 사람 인출 시간 Pi 입력
	int *P = new int[N];
	for (int i = 0; i < N; i++) cin >> P[i];

	//오름차순 정렬 - 버블정렬
	for (int i = 0; i < N-1; i++) {
		for (int j = i+1; j < N; j++) {
			if (P[i] > P[j]) {
				int tmp = P[i];
				P[i] = P[j];
				P[j] = tmp;
			}
		}
	}

	//합 출력
	int sum = 0;
	for (int i = 0; i < N; i++) {
		cout<< P[i];
	}
	cout << sum;
}