#include <iostream>
#include <queue>    //BFS에서 활용
#include <string.h> //memset 쓰려면 필요
using namespace std;

/* 전역으로 정의 - 자동 0 초기화 */
int arr[1001][1001]; //인접행렬
int visited[1001];   //방문기록
int N, M, V;

/* DFS - 재귀(시스템 스택 사용) (후입선출 LIFO) */
void DFS(int V)
{
    visited[V] = 1;   //시작점 방문기록
    cout << V << " "; //방문한 노드 출력

    for (int i = 1; i <= N; i++)
    {
        if (arr[V][i] == 1 && visited[i] == 0)
        {
            DFS(i); //스택에 i 넣는 셈
        }
        if (i == N)
            return;
    }
}

/* BFS - 큐 사용 (선입선출 FIFO) */
void BFS(int V)
{
    queue<int> q; //큐 생성
    q.push(V);    //시작노드 큐에 넣음

    while (!q.empty())
    {
        int next = q.front(); //큐 맨 앞에 값을 방문
        visited[next] = 1;    //방문기록
        cout << next << " ";  //방문한 노드 출력
        q.pop();              //큐에서 뺌

        //방문했던 노드와 가까운 노드 큐에 넣어줌
        for (int i = 1; i <= N; i++)
        {
            if (arr[next][i] == 1 && visited[i] == 0)
            {
                q.push(i);         //큐에 넣어줌
                visited[i] = 1; // i 점은 미리 방문기록 - 안하면 중복으로 방문할 수도 있다
            }
        }
    }
    
}

int main()
{
    int u, v;
    cin >> N >> M >> V;

    for (int i = 0; i < M; i++)
    {
        cin >> u >> v;
        arr[u][v] = 1;
        arr[v][u] = 1; //자리바꿔서도 해주는 이유 : 무방향이기 때문
    }                  //입력 즉시 인접행렬에 넣어줌, 다 돌면 인접행렬 완성

    DFS(V); // DFS 수행

    cout << "\n";                        //개행
    memset(visited, 0, sizeof(visited)); //방문기록 visited 초기화

    BFS(V); // BFS 수행
}