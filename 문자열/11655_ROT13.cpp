#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    getline(cin, input);

    for(int i=0 ;i<input.length(); i++)
    {
        char ch = input[i];
        //소문자일 때
        if(ch>=97 && ch<=122)
        {
            if(ch+13 > 122) input[i] = ch+13-26;
            else input[i] = ch+13;
        }
        //대문자일 때
        if(ch>=65 && ch<=90)
        {
            if(ch+13 > 90) input[i] = ch+13-26;
            else input[i] = ch+13;
        }
    }
    cout<<input;
}