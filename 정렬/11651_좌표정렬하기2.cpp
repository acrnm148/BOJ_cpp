#include <iostream>
#include <algorithm>
using namespace std;

struct position
{
	int y, x;
};

bool compare(position now, position last)
{
	if(now.y > last.y) return false;
	if(now.y == last.y && now.x > last.x) return false;
	else return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;
	struct position arr[100001];

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i].x >> arr[i].y;
	}

	//정렬
	sort(arr, arr+N, compare);

	for(int i=0; i<N; i++) cout<<arr[i].x <<" "<<arr[i].y<<"\n";
}