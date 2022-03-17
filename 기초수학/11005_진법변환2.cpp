#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, B, res;
    char restoc;
    string answ;
    cin >> N >> B;

    while (N > 0)
    {
        res = N % B;
        if (res >= 10)
        {
            restoc = (char)(res + 55);
        }
        else
        {
            restoc = (char)(res + 48);
        }
        answ += restoc;

        N = N / B;
    }
    for (int i = answ.length() - 1; i >= 0; i--)
        cout << answ[i];
}