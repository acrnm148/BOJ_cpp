#include<iostream>
#include<queue>
using namespace std;

queue<pair<int, int>> q;
int tomato[1001][1001];
int visited[1001][1001];
int check[1001][1001]; //시작점으로부터 이동하는 방법수 (익는 일수)
int check_max;
int M, N;
int dirX[4] = {0, -1, 1, 0};
int dirY[4] = {1, 0, 0, -1};

void BFS()
{
    while(!q.empty())
    {
        int now_i = q.front().first;
        int now_j = q.front().second;
        q.pop();
        for(int k = 0; k<4; k++)
        {
            int i_ = now_i + dirY[k];
            int j_ = now_j + dirX[k];
            if(i_ == 0 || i_ > N || j_ == 0 || j_ > M) continue;
            if(visited[i_][j_] == 0 && tomato[i_][j_] == 0)
            {
                check[i_][j_] = check[now_i][now_j] + 1; //연결된 노드까지 가는 방법수 체크
                if(check[i_][j_] > check_max) check_max = check[i_][j_];
                visited[i_][j_] = 1;
                q.push({i_, j_});
            }
        }
    }
}

int main()
{
    cin >> M >> N;

    //인접행렬
    for(int i = 1; i<=N; i++) //세로
    {
        for(int j = 1; j<=M; j++) //가로
        {
            cin >> tomato[i][j];
            if(tomato[i][j] == 1) q.push({i, j}); 
            // 익은 토마토만 큐에 넣어주고 시작
            // 이러면 시작지점이 여러개가 됨
        }
    }

    //BFS 실행
    BFS();

    //익었는지 상태 검사
    for(int i =1; i<=N; i++)
    {
        for(int j = 1; j<=M; j++)
        {
            if(tomato[i][j] == 0 && visited[i][j] == 0) check_max = -1;
        }
    }
    
    cout << check_max;
    
}