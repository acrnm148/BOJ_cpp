#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int N;
    scanf("%d",&N);

    int arr[301];
    int dp[301];

    arr[0] = 0;
    dp[0] = 0;

    for(int i=1; i<=N; i++) scanf("%d",&arr[i]);

    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];

    for(int i=3; i<=N; i++)
    {
        dp[i] = max(dp[i-3]+arr[i]+arr[i-1], dp[i-2]+arr[i]);
    }

    printf("%d\n",dp[N]);
    
}