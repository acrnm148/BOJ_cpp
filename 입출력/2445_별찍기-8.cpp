#include<iostream>
using namespace std;

int main()
{
    int N;
    scanf("%d",&N);
    for(int i=1; i<=N; i++) 
    {
        for(int j = 1; j<=i; j++) printf("*");
        for(int k=2*N; k>2*i; k--) printf(" ");
        for(int j = 1; j<=i; j++) printf("*");
        printf("\n");
    }
    for(int i=N-1; i>=1; i--) 
    {
        for(int j = i; j>=1; j--) printf("*");
        for(int k = 2*N; k>2*i; k--) printf(" ");
        for(int j = i; j>=1; j--) printf("*");
        printf("\n");
    }
}