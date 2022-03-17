#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int div;
    div = 2;

    cin >> N;
    while(N>1)
    {
        if(N % div ==0)
        {
            N = N/div;
            cout << div <<"\n";
        }
        else div ++;
    }
}