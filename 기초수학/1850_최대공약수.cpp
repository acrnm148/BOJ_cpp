#include<iostream>
using namespace std;

int main()
{
    long long A1, B1, tmp1;
    long long A2, B2, tmp2, res;
    scanf("%lld %lld",&A1,&B1);

    if(A1<B1)
    {
        tmp2 = A1;
        A1 = B1;
        B1 = tmp2;
    }

    A2 = 0;
    B2 = 0;
    tmp1 = 1;

    for (long long i = A1; i > 0; i--)
    {
        tmp1 = 1;
        for (long long j = i - 1; j >= 0; j--)
        {
            if(j==0) tmp1 = tmp1 * 1;
            else tmp1 = tmp1 * 10;
        }
        A2 += tmp1;
    }
    tmp1 = 1;
    for (long long i = B1; i > 0; i--)
    {
        tmp1 = 1;
        for (long long j = i - 1; j >= 0; j--)
        {
            if(j==0) tmp1 = tmp1 * 1;
            else tmp1 = tmp1 * 10;
        }
        B2 += tmp1;
    }
    while(B2!=0)
    {
        res = A2 % B2;
        A2 = B2;
        B2 = res;
    }
    
    printf("%lld",A2);
}