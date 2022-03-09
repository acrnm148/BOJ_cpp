#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int arr[100001];
    int dp[100001];

    cin>>N;
    for(int i=1; i<=N; i++) cin>>arr[i];

    dp[0] = 0;
    dp[1] = arr[1];

    int result;
    result = arr[1];
    for(int i=1; i<=N; i++)
    {
        dp[i] = max(dp[i-1] + arr[i], arr[i]);
        //result = max(result, dp[i]);
    }
    sort(&dp[1], &dp[N+1]);
    //cout<<result<<"\n";
    cout<<dp[N]<<"\n";
}