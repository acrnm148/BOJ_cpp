#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    cin>>input;
    string* arr = new string[input.length()];

    for(int i=0; i<input.length(); i++)
    {
        arr[i] = input.substr(i);
    }
    sort(arr,arr+input.length());
    for(int i=0 ;i<input.length(); i++) cout<<arr[i]<<"\n";
}