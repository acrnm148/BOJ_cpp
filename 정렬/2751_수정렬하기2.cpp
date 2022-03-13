#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin>>N;
    int* arr = new int[N];

    for(int i=0; i<N; i++) cin>>arr[i]; 
    sort(arr,arr+N);
    for(int i=0; i<N; i++) cout<<arr[i]<<"\n";

    delete[] arr;
}