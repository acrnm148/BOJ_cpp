#include <iostream>
#include <queue>
#include <string>
using namespace std;

int road[101][101];
int visited[101][101];
int N, M;
int min;
int dirX[4] = {0, -1, 1, 0};
int dirY[4] = {1, 0, 0, -1};
int Min = 99999; // min은 함수가 있으므로 Min써줘야함 아니면 ambigous(모호함)

void DFS(int i, int j, int depth)
{
    visited[i][j] = 1;
    /*
        도착은 여러번 할 것임
        도착할 때 까지 깊이를 카운트해서
        도착할 때마다 대소비교해서 더 작은걸 min에 저장해둠
        마지막에는 min에 분기별 깊이 중 제일 최솟값이 저장되어있도록 함
    */
    if (i == N && j == M) //도착
    {
        if (depth < Min)
        {
            Min = depth;
        }
        return; //어떤 상황이든 도착하면 끝 - 다음 분기 넘어감
    }

    for (int k = 0; k < 4; k++)
    {
        int i_ = i + dirY[k];
        int j_ = j + dirX[k];
        if (i_ <= 0 && i_ >= N && j_ <= 0 && j_ >= M)
            continue;
        if (visited[i_][j_] == 0 && road[i][j] == 1)
        {
            visited[i_][j_] = 1;
            DFS(i_, j_, depth + 1); 
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string input_line;

    cin >> N >> M;
    for (int i = 1; i <= N; i++) //세로
    {
        cin >> input_line;
        for (int j = 1; j <= M; j++) //가로
        {
            char tmp = input_line[j-1];
            road[i][j] = tmp - '0';
        }
    }

    DFS(1,1, 1);
    cout << Min << "\n";
}