#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
	stack<int> stack_;
	int N, num;
	string cmd;
	cin >> N;

	for(int i=0; i<N; i++)
	{
		num = 0;
		
		cin >> cmd;
		if(cmd == "push")
		{
			cin>>num;
			stack_.push(num);
		}
		else if(cmd == "pop")
		{
			if(!(stack_.size() > 0)) cout<<"-1"<<"\n";
			else 
			{
				cout << stack_.top()<<"\n";
				stack_.pop();
			}
		}
		else if(cmd == "size")
		{
			cout<<stack_.size()<<"\n";
		}
		else if(cmd == "empty")
		{
			if(stack_.empty()) cout<<"1"<<"\n";
			else cout<<"0"<<"\n";
		}
		else if(cmd == "top")
		{
			if(stack_.size() == 0) cout<<"-1"<<"\n";
			else cout<<stack_.top()<<"\n";
		}
	}
	return 0;
}