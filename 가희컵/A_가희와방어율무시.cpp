#include <iostream>

using namespace std;

int main()
{
	double a, b, def;
	cin >> a >> b;
	def = a - a * (b/100);
	if (def >= 100)
		cout << "0";
	else
		cout << "1";
}