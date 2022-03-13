#include <iostream>
using namespace std;

int makeNumber(long long cnt, long long num)
{
    if (cnt == 0)
        return num;
    else
        return makeNumber(cnt - 1, num * 10);
}

int getGCD(long long A, long long B)
{
    if (A % B == 0)
        return B;
    else
        return getGCD(B, A % B);
}

int main()
{
    long long cntA, cntB;
    long long A, B, tmp;
    A = 0;
    B = 0;
    scanf("%lld %lld", &cntA, &cntB);

    while(cntA--)
    {
        tmp = makeNumber(cntA, 1);
        A = A+tmp;
    }

    while(cntB--)
    {
        tmp = makeNumber(cntB, 1);
        B = B+tmp;
    }

    //printf("%d %d", A, B);
    long long result = getGCD(A,B);
    printf("%lld", result);
}