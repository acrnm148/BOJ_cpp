#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int x = 1, y = 1, z = 1, state = 1;
	string angle;
	while (state) {
		scanf("%d %d %d", &x, &y, &z);
		if (x == 0 && y == 0 && z == 0) state = 0;
		else {
		if (x >= y && x >= z) {
			if ((y*y + z * z) == x * x) angle = "right";
			else angle = "wrong";
		}
		else if (y >= x && y >= z) {
			if ((x*x + z * z) == y * y) angle = "right";
			else angle = "wrong";
		}
		else if (z >= y && z >= x) {
			if ((y*y + x * x) == z * z) angle = "right";
			else angle = "wrong";
		}
		cout << angle << endl;
		}
	}
}