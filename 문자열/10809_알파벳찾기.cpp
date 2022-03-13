#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    int atoz[27];
    for(int i=1; i<=26; i++) atoz[i] = -1;

    cin>>input;
    for(int i=0; i<input.length(); i++)
    {
        char ch = input[i];
        for(int j=97; j<=122; j++)
        {
            if(ch == j && atoz[j-96] == -1)
            {
                atoz[j-96] = i;
            }
        }
    }
    for(int i=1; i<=26; i++) cout<<atoz[i]<<" ";
}