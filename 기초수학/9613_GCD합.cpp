#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    if (a % b == 0)
        return b;
    else
        return gcd(b,a%b);
}

int main()
{
    int t, length;
    long long GCD;
    scanf("%d", &t);

    while (t--)
    {
        GCD = 0;
        scanf("%d", &length);
        int *arr = new int[length];
        for (int i = 0; i < length; i++)
        {
            scanf("%d", &arr[i]);
            for (int j = 0; j < i; j++)
            {
                    int tmp = gcd(arr[i], arr[j]);
                    GCD += tmp;
            }
        }
        printf("%lld\n",GCD);
        delete[] arr;
    }
}