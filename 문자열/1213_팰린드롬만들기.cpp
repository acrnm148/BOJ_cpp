#include <iostream>
#include <string>
using namespace std;

int alpha[27];
char res[50];

bool check(string input)
{
	int cnt = 0;

	for (int i = 0; i<input.length(); i++)
		alpha[input[i] - 'A']++;
	for (int j = 0; j < 27; j++)
	{
		if (alpha[j] % 2 == 1)
		{
			cnt++;
			if (cnt >= 2)
				return 1;
		}
	}
	return 0;
}

void print_num(string input)
{
	int len = input.length();
	int j = 0;
	for (int i = 0; i < 27; i++)
	{
		while (alpha[i] >= 2)
		{
			res[j] = 'A' + i;
			res[len - j - 1] = 'A' + i;
			j++;
			alpha[i]-=2;
		}
	}
	for (int i = 0; i < 27; i++)
	{
		if (alpha[i] == 1)
		{
			res[j] = 'A' + i;
			j++;
			alpha[i]--;
		}
	}
	for (int j = 0; j < len; j++)
		cout << res[j];
}

int main(void)
{
	string input;
	cin >> input;
	if (check(input) == 1)
	{
		cout << "I'm Sorry Hansoo";
		return 0;
	}
	print_num(input);
}