#include<iostream>
using namespace std;

int main()
{
    int A, B;
    while(cin>>A>>B)
    {
        if(A==0 && B==0) break;
        else cout<<A+B<<endl;
    }
}