#include<iostream>
using namespace std;

int main() {
	int x, y, w, h;
	int Xmin, Ymin, result;

	cin >> x >> y >> w >> h;

	//y의 경우
	Ymin = y;
	if (h - y < Ymin) Ymin = h - y;

	//x의 경우
	Xmin = x;
	if (w - x < Xmin) Xmin = w - x;

	result = Xmin;
	if (Ymin < Xmin) result = Ymin;

	cout << result;
}