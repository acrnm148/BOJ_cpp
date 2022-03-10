#include <iostream>
using namespace std;

int main()
{
    int T, A, B, tmp, res;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &A, &B);
        int gop = A*B;
        if (A < B)
        {
            tmp = A;
            A = B;
            B = tmp;
        }
        while (B != 0)
        {
            res = A % B;
            A = B;
            B = res; 
        }
        printf("%d\n", gop/A);
    }
}