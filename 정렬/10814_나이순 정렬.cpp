#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#define MAX_NAME 101
#define MAX_MEM 100001
typedef struct _info {
	int age;
	char name[MAX_NAME];
}info;

info mem[MAX_MEM] = { 0, };
int main() {
	int N;
	info tmp_i;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &mem[i].age);
		scanf("%s", &mem[i].name, MAX_NAME);
	}
	stable_sort(mem, mem + N, [](info i, info j) {
		return i.age < j.age;
	});
	for (int i = 0; i < N; i++) {
		cout << mem[i].age << " " << mem[i].name << "\n";
	}
}