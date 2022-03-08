#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    int T;
    int sum = 0;
    cin>>T>>str;
    for(int i=0; i<T; i++)
    {
        sum += str[i]-48;
    }
    cout<<sum<<"\n";
}
