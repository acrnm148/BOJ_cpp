#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

vector<int> vect[1001]; //무방향 인접리스트
int visited[1001];      //방문기록
int N;                  //노드 개수(순열 크기)

void DFS(int start)
{
    if (visited[start] == 0)
        visited[start] = 1; //방문했다

    //인접노드 방문하러 가자
    for (int i = 0; i < vect[start].size(); i++)
    {
        if (visited[vect[start][i]] == 0)
        {
            visited[vect[start][i]] = 1; //인접 요소 방문했다
            DFS(vect[start][i]);         //인접요소를 시작정점으로
                                         // DFS 탐색하겠다
        }
    }
}

int main()
{
    int T, num;
    cin >> T;
    while (T--)
    {
        int cnt = 0;
        cin >> N;
        for (int i = 1; i <= N; i++)
        {
            cin >> num;
            vect[i].push_back(num); //인접리스트에 각각 저장
        }

        for (int i = 1; i <= N; i++)
        {
            if (visited[i] == 0)
            {
                DFS(i);
                cnt++;
            }
        }
        cout << cnt << "\n";
        memset(vect, 0, sizeof(vect));       //인접리스트 초기화
        memset(visited, 0, sizeof(visited)); //방문기록 초기화
    }
}