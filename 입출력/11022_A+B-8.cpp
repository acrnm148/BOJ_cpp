#include<iostream>
using namespace std;

int main()
{
    int T;
    int A, B;
    scanf("%d",&T);

    for(int i=1; i<=T; i++)
    {
        scanf("%d %d", &A, &B);
        cout<<"Case #"<<i<<": "<<A<<" + "<<B<<" = "<<A+B<<"\n";

    }
}