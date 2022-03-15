#include <iostream>
#include <algorithm>

using namespace std;

long long arr[5000001]; //스택 메모리 초과나서 전역변수로 지정해서 Data 영역 쓰게 함
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K, result;

    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+N);
    for(int i=0; i<N; i++)
    {
        if(i == K-1) 
        {
            result = arr[i];
            break;
        }
    }
    cout<<result<<"\n";
}