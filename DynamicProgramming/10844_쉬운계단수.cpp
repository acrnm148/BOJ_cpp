#include <iostream>
#define modNum 1000000000
using namespace std;

int main()
{
    int N, result;
    scanf("%d", &N);
    result = 0;

    int dp[101][10];

    /* 초기값 지정 */
    dp[1][0] = 0;
    for (int j = 1; j <= 9; j++)
    {
        dp[1][j] = 1;
    }

    /* 점화식 */
    for (int i = 2; i <= N; i++)
    {
        for(int j = 0; j<=9; j++)
        {
            if(j==0) dp[i][j] = dp[i-1][1] % modNum;
            else if(j==9) dp[i][j] = dp[i-1][8] % modNum;
            else dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % modNum;
        }
    }
    for(int j=0; j<=9; j++)
    {
        result = (result + dp[N][j]) % modNum; 
        /* %를 맨 마지막에만 해주면 int의 최댓값을 넘어가서
        중간중간에 계속 해줘야함 */
    }
    printf("%d",result);
}