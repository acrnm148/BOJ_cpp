#include <iostream>
using namespace std;

int main()
{
    int N, cnt;
    scanf("%d", &N);
    cnt = N;
    for (int i = N; i < 2*N; i++)
    {
        if (i == 2*N-1)
        {
            for (int z = 1; z <= 2 * N - 1; z++)
                printf("*");
        }
        else
        {
            for (int j=1; j<=i; j++)
            {
                if(j==i || j==cnt) printf("*");
                else printf(" ");
            }
        }
        
        cnt--;
        printf("\n");
    }
}