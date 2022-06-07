#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str, cmd;
	int hh, mm, L, res = 0;
	int part[7] = {0, };
	double time;
	//입력
	cin >> str;
	for (int i = 1; i <= 6; i++)
		cin >> part[i];
	cin >> L;
	hh = stoi(str.substr(0, 2));
	mm = stoi(str.substr(3, 5));
	while (L--)
	{
		cin >> time >> cmd;
		if (cmd == "10MIN")
			mm += 10;
		else if (cmd == "30MIN")
			mm += 30;
		else if (cmd == "50MIN")
			mm += 50;
		else if (cmd == "2HOUR")
			hh += 2;
		else if (cmd == "4HOUR")
			hh += 4;
		else if (cmd == "9HOUR")
			hh += 9;
		else if (cmd == "^")
		{
			if (hh >= 0 && hh <= 1)
				part[1] = 0;
			else if (hh >= 2 && hh <= 3)
				part[2] = 0;
			else if (hh >= 4 && hh <= 5)
				part[3] = 0;
			else if (hh >= 6 && hh <= 7)
				part[4] = 0;
			else if (hh >= 8 && hh <= 9)
				part[5] = 0;
			else if (hh >= 10 && hh <= 11)
				part[6] = 0;
		}
		if (mm >= 60)
		{
			hh += 1;
			mm -= 60;
		}
		if (hh >= 12)
			hh = hh - 12;
	}
	for (int i = 1; i <= 6; i++)
		res += part[i];
	if (res > 100)
		res = 100;
	cout << res;
}