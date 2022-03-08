#include<iostream>
using namespace std;

int main()
{
    int N;
    scanf("%d",&N);
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<i; j++) printf(" ");
        for(int k=2*N-1; k>2*i; k--) printf("*");
        printf("\n");
    }
    for(int i=N-1; i>0; i--)
    {
        for(int j = 1; j<i; j++) printf(" ");
        for(int k=2*(N-i)+1; k>0; k--) printf("*");
        printf("\n");
    }
}