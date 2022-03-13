#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, result;
    result = 1;
    cin >> N;

    for(int i = N; i>=1; i--)
    {
        result = result * i;
    }
    if(N == 0) result = 1;

    cout<<result;
}