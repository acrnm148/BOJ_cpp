#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int cnt = 0;
    stack<char> stack_;
    string input;

    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '(')
        {
            stack_.push('(');
        }
        else if (input[i] == ')')
        {
            stack_.pop();
            if (input[i - 1] == '(')
                cnt += stack_.size();
            else if (input[i - 1] == ')')
                cnt += 1;
        }
    }

    cout << cnt << "\n";
}