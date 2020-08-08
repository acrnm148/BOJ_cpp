#include<iostream>
using namespace std;
int main() {
	int T, H, W, N, count, floor, num;
	bool state;
	scanf("%d", &T);
	while (T--) {
		scanf("%d %d %d", &H, &W, &N);
		state = false;
		floor = 0;
		num = 0;
		count = 1;
		for (int i = 1; i <= W; i++) {
			for (int j = 1; j <= H; j++) {
				if (count == N) {
					floor = j;
					num = i;
					state = true;
					break;
				}
				else count++;
			}
			if (count == N && state == true) break;
		}
		cout << floor * 100 + num << "\n";
	}
}