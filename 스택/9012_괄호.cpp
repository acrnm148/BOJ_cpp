#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
    int N;
    cin>>N;

    while(N--)
    {
        string input;
        stack<char> stack_;
        char last_top = -1;

        cin >> input;

        for(int i=0; i<input.length(); i++)
        {
            stack_.push(input[i]);

            if(stack_.top() == ')')
            {
                if(last_top == '(')
                {
                    stack_.pop();
                    stack_.pop();
                }
            }
            if(stack_.size() != 0) last_top = stack_.top();
            else last_top = -1;
        }
        if(stack_.size() == 0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}