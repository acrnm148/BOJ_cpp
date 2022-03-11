#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin>>N;

    int dp[100001];
    for(int i=0; i<=N; i++) dp[i] = i; //초기화
    
    for(int i=1; i<=N; i++)
    {
        for(int j = 1; j*j<=i; j++)
        {
            dp[i] = min(dp[i], dp[i-j*j]+1);
        }
    }
    cout<<dp[N];
}