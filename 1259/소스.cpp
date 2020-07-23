#include <iostream>
#include<math.h>
#include<string>
using namespace std;

string Comp(int num) {
	int originNum = num;
	int tmp[5];
	int result = 0;
	int count = 0;

	while (num > 0) {
		tmp[count] = num % 10;
		num = num / 10;
		count++;
	}
	for (int i = 0; i < count; i++) {
		result = result + tmp[i] * pow(10, count - i);
	}
	if (originNum == result / 10) return "yes";
	else return "no";
}

int main() {
	int num[1000];

	for(int i=0;;i++) {
		cin >> num[i];
		if (num[i] == 0) break;
		else cout << Comp(num[i]) << endl;
	}
}