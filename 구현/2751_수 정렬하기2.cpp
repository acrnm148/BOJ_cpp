#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int T,*arr;
	scanf("%d", &T);
	arr = new int[T];
	for(int i=0; i<T; i++) scanf("%d", &arr[i]);
	sort(arr, arr + T);
	for (int i = 0; i < T; i++) cout << arr[i]<<"\n";
}