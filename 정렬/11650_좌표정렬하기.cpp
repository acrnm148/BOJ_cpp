#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

struct Pos
{
	int x,y;
};

bool compare(Pos A, Pos B)
{
	if(A.x == B.x) 
		return A.y < B.y;
	else A.x < B.x;
}

int main()
{
	int N;
	Pos arr[1000001] = {0, };
	cin>>N;

	for (int i = 0; i < N; i++)
		cin>> arr[i].x >> arr[i].y;

	sort(arr,arr+N, compare); 
	/*sort함수는 주소값으로 숫자가 들어와야 한다.*/
	/*안먹는다는건 파라미터 값이 잘못되었다는 것*/

	for (int i = 0; i < N; i++) 
	{
		cout << arr[i].x << arr[i].y;
		printf("\n");
	}
	return 0;
}