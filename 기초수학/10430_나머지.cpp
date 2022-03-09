#include<iostream>
using namespace std;

int main()
{
    int A, B, C;
    scanf("%d %d %d",&A,&B,&C);
    int case1, case2, case3, case4;
    case1 = (A+B)%C;
    case2 = (A%C + B%C) %C;
    case3 = (A*B)%C;
    case4 = ((A%C) * (B%C))%C;

    printf("%d\n%d\n%d\n%d\n",case1,case2,case3,case4);
}