#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T, N;
    int arr[2][100001];
    int dp[2][100001];

    scanf("%d", &T); //테스트 케이스
    for (int t = 0; t < T; t++)
    {
        scanf("%d", &N); //열 개수
        for (int i = 1; i <= N; i++) scanf("%d", &arr[0][i]);
        for (int i = 1; i <= N; i++) scanf("%d", &arr[1][i]);
    
        dp[0][0] = 0;
        dp[1][0] = 0;
        dp[0][1] = arr[0][1];
        dp[1][1] = arr[1][1];

        for(int i=2; i<=N; i++)
        {
            dp[0][i] = max(dp[1][i-1], dp[1][i-2]) + arr[0][i];
            dp[1][i] = max(dp[0][i-1], dp[0][i-2]) + arr[1][i];
        }
        printf("%d\n",max(dp[0][N], dp[1][N]));
    }
}