#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int N, tmp = 665, count = 0, origintmp;
	int state = 0;

	
		cin >> N;
		origintmp = tmp;
		while (1) {
			if (tmp > 0) {
				if (tmp % 10 == 6) {
					state++;
					if (state == 3) {
						count++;
						if (count == N) break;
					}
				}
				else state = 0;
				tmp = tmp / 10;
			}
			else {
				tmp = origintmp++;
				state = 0;
			}
		}
		cout << origintmp - 1 << endl;
	
}