#include<iostream>
#include<algorithm>
using namespace std;
#define MAX_MEM 51
typedef struct _info {
	int height;
	int weight;
	int score;
}info;
int main() {
	info mem[MAX_MEM] = { 0, };
	int N, tmp, cnt = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &mem[i].weight, &mem[i].height);
		mem[i].score = 1;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if ((mem[i].weight < mem[j].weight) && (mem[i].height < mem[j].height)) {
				mem[i].score++;
			}
		}
	}
	for (int i = 0; i < N; i++) cout << mem[i].score << " ";
}