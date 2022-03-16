#include <iostream>
#include <cmath>
using namespace std;

#define MAX 1000000
int visited[MAX]; //방문기록
int A, P;         //시작 수 A, 곱할 횟수

void DFS(int A)
{
    visited[A] += 1; //방문기록 남김
    if (visited[A] == 3)
        return;
    int sum = 0;
    float sum_d = 0;

    //각 자리별로 거듭제곱 + 자리수만큼 더해줌
    while (A > 0)
    {
        //자릿수가 여러개일 수 있으니 뒤에서부터 더해줘야함
        sum += (int)floor(pow((A % 10), P) + 0.5); //자꾸 1 작은 경우가 생겨서 반올림해줌7 
        sum_d += pow((A % 10), P);
        A = A / 10;
    }
    DFS(sum);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int cnt = 0; //반복되지 않는 요소 개수

    cin >> A >> P;
    DFS(A);

    for (int i = 0; i < MAX; i++)
    {
        if (visited[i] == 1) //한번만 방문했으면 (반복되지 않으면)
        {
            cnt++;
        }
    }
    cout << cnt << "\n";
}