#include<iostream>
#define modNum 10007
using namespace std;

int main()
{
    int N, result;
    scanf("%d",&N);
    result = 0;

    int dp[1001][10];

    for(int j=0; j<=9; j++) dp[1][j] = 1;
    for(int i=2; i<=N; i++)
    {
        for(int j=0; j<=9; j++)
        {
            if(j==0) dp[i][j] = 1;
            else dp[i][j] = (dp[i][j-1] + dp[i-1][j]) % modNum;
        }
    }
    for(int i=0; i<=9; i++)
    {
        result = (result + dp[N][i]) % modNum;
    }
    printf("%d",result);
}