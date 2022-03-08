#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int minValue = 1000000;  // minValue에 제일 큰 값을 넣어줌
    int maxValue = -1000000; // maxValue에 제일 작은 값을 넣어줌

    int N;
    cin >> N;

    int inputValue;

    for (int i = 0; i < N; i++)
    {
        cin >> inputValue;
        if (inputValue < minValue)
            minValue = inputValue;
        if (inputValue > maxValue)
            maxValue = inputValue;
    }

    cout << minValue << " " << maxValue;
}