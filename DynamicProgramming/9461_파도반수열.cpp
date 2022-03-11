#include<iostream>
using namespace std;

int main()
{

    int T,N;
    cin>>T;
    long long dp[101];

    while(T--)
    {
        scanf("%d",&N);

        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 1;
        dp[4] = 2;
        dp[5] = 2;

        for(int i=6; i<=N; i++)
        {
            dp[i] = dp[i-1] + dp[i-5];
        }
        cout<<dp[N]<<"\n";
    }
}