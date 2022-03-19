#include <iostream>
#include <queue>
#include <string>
using namespace std;

int road[101][101];    //길인지 아닌지
int visited[101][101]; //방문기록
int check[101][101];   //시작점으로부터 거리를 저장하는 배열
int N, M;
int dirX[4] = {0, -1, 1, 0};
int dirY[4] = {1, 0, 0, -1};
int cnt;

void BFS(int i, int j)
{
    queue<pair<int, int>> q; //큐 생성
    visited[i][j] = 1; //방문기록

    q.push({i, j}); //시작점 넣기

    while (q.size() > 0) //큐에 데이터가 있을 때 동안
    {
        int now_i = q.front().first;
        int now_j = q.front().second;
        q.pop(); //큐 맨 앞 데이터 없앰
        for (int k = 0; k < 4; k++)
        {
            int i_ = now_i + dirY[k];
            int j_ = now_j + dirX[k];
            if (!(i_ <= 0 || i_ > N || j_ <= 0 || j_ > M)) //미로의 범위
            {
                //길은 있는데 방문한 적이 없으면
                if (visited[i_][j_] == 0 && road[i_][j_] == 1)
                {
                    visited[i_][j_] = 1; //방문기록
                    q.push({i_, j_}); //큐에 넣음
                    check[i_][j_] = check[now_i][now_j] + 1; // 길 +1
                     cout <<"check["<<now_i<<"]["<<now_j<<"] : "<< check[now_i][now_j] <<"     check["<<i_<<"]["<<j_<<"] : "<< check[i_][j_]<<endl;
                }
            }
        }
    }
}

int main()
{
    cin >> N >> M;
    string input_line;

    //인접행렬 완성
    for (int i = 1; i <= N; i++)
    {
        cin >> input_line;
        for (int j = 1; j <= M; j++)
        {
            char tmp = input_line[j-1];
            road[i][j] = tmp - '0';
        }
    }

    //탐색하러 감
    BFS(1,1);

    cout << check[N][M]+1 << "\n";
    
}