#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string A, B, C, D;
    cin >> A >> B >> C >> D;

    string AandB = A + B;
    string CandD = C + D;

    cout << stol(AandB) + stol(CandD);
}