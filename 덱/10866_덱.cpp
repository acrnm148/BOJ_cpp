#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main()
{
	deque<int> deq;
	string cmd;
	int T, num;

	cin>>T;
	while(T--)
	{
		cin>>cmd;

		if(cmd=="push_front")
		{
			cin>>num;
			deq.push_front(num);
		}
		else if(cmd=="push_back")
		{
			cin>>num;
			deq.push_back(num);
		}
		else if(cmd=="pop_front")
		{
			if(deq.size() != 0) 
			{
				cout<< deq.front() <<"\n";
				deq.pop_front();
			}
			else cout<<"-1\n";
		}
		else if(cmd=="pop_back")
		{
			if(deq.size() != 0) 
			{
				cout<< deq.back() <<"\n";
				deq.pop_back();
			}
			else cout<<"-1\n";
		}
		else if(cmd=="size")
		{
			cout<<deq.size()<<"\n";
		}
		else if(cmd=="empty")
		{
			cout<<deq.empty()<<"\n";
		}
		else if(cmd=="front")
		{
			if(deq.size() != 0) 
			{
				cout<<deq.front()<<"\n";
			}
			else cout<<"-1\n";
		}
		else if(cmd=="back")
		{
			if(deq.size() != 0) 
			{
				cout<<deq.back()<<"\n";
			}
			else cout<<"-1\n";
		}
	}
}