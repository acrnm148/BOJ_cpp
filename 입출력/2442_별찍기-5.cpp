#include<iostream>
using namespace std;

int main()
{
    int N, total;
    scanf("%d",&N);
    total = N;
    for(int i=1; i<=N; i++)
    {
        for(int j=N; j>i; j--) printf(" "); 
        for(int k=1; k<=total-(N-i); k++) printf("*");
        printf("\n");
        total++;
    }
}