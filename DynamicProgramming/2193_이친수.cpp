#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin>>N;
    long long dp[91]; /* N에 90 넣어주면 숫자가 너무 커서 int 한계 넘어감 */

    dp[1] = 1;
    dp[2] = 1;

    for(int i=3; i<=N; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout<<dp[N];
}