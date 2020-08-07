#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int N, *score;
	double *rescore, max, sum = 0, avg;
	scanf("%d", &N);
	score = new int[N];
	rescore = new double[N];
	for (int i = 0; i < N; i++) scanf("%d", &score[i]);
	sort(score, score + N);
	max = (double)score[N - 1];
	for (int i = 0; i < N; i++) {
		rescore[i] = (double)score[i] / max * 100;
		sum += rescore[i];
	}
	avg = sum / (double)N;
	cout << avg << "\n";
}