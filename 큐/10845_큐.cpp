#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main()
{
	string cmd;
	int N, num;
	queue<int> que;

	cin>>N;
	while(N--)
	{
		cin>>cmd;
		
		if(cmd=="push")
		{
			cin>>num;
			que.push(num);
		}
		else if(cmd=="pop")
		{
			if(que.size() == 0) cout << "-1"<<"\n";
			else 
			{
				cout<<que.front()<<"\n";
				que.pop();
			}
		}
		else if(cmd=="size")
		{
			cout<<que.size()<<"\n";
		}
		else if(cmd=="empty")
		{
			if(que.empty()) cout<<"1"<<"\n";
			else cout<<"0"<<"\n";
		}
		else if(cmd=="front")
		{
			if(que.size() != 0) cout<<que.front()<<"\n";
			else cout<<"-1"<<"\n";
		}
		else if(cmd=="back")
		{
			if(que.size() != 0) cout<<que.back()<<"\n";
			else cout<<"-1"<<"\n";
		}

	}
}