#include<iostream>
using namespace std;

int main()
{
    int A, B, tmp, gop;
    int max, min;
    max = 0;
    min = 0;

    scanf("%d %d",&A, &B);
    gop = A*B;
    if(A<B) 
    {
        tmp = A;
        A = B;
        B = tmp;
    }

    while (B != 0)
    {
        int res = A % B;
        A = B;
        B = res;
    }

    max = A;
    min = gop/max;

    printf("%d %d", max, min);
}