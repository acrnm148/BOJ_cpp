#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    int atoz[27] = {0};

    cin>>input;

    for(int n=0; n<=input.length(); n++)
    {
        char tmp = input[n];
        for(int i = 97; i<=122; i++)
        {
            if(tmp == i)
            {
                atoz[i-96] += 1;
            }
        }   
    }
    for(int i = 1; i<=26; i++) cout<<atoz[i]<<" ";
}