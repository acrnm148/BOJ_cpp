#include<iostream>
using namespace std;

int main()
{
    int N;
    scanf("%d",&N);
    for(int i=N; i>=1; i--)
    {
        for(int k=1; k<=N-i; k++) printf(" ");
        for(int j=1; j<=i; j++) printf("*");
        printf("\n");
    }
}