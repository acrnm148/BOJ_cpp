#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> vect[1001];
int visited[1001];
int N, M;

void BFS(int start)
{
    queue<int> q;
    q.push(start);
    visited[start] = 1;

    while (q.size() != 0)
    {
        // start가 아닌 가장 앞의 값에 인근 정점을 push 해줘야함
        int current = q.front();
        q.pop();
        for (int i = 0; i < vect[current].size(); i++)
        {
            if (visited[vect[current][i]] == 0)
            {
                visited[vect[current][i]] = 1; 
                q.push(vect[current][i]);
                //BFS는 재귀가 아니라서 큐에 push 해주는 동시에 방문기록 남겨야함.
            }
        }
    }
}

int main()
{
    int cnt = 0; //연결요소 개수 세는 변수
    int u, v;
    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> u >> v;
        vect[u].push_back(v);
        vect[v].push_back(u);
    }

    //인접 리스트를 쓰기 때문에 요소 1번부터 N번까지 BFS 다 돌아야함
    for (int i = 1; i <= N; i++)
    {
        if (visited[i] == 0)
        {
            BFS(i);
            cnt++;
        }
    }
    cout << cnt;
}