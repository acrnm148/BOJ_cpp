#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int world[51][51];
int visited[51][51];
int w,h, cnt;
int dirX[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dirY[8] = {1, 1, 1, 0, 0, -1, -1, -1};
queue<pair<int,int>> q;

void BFS(int i, int j)
{
    visited[i][j] = 1;
    q.push({i,j});
    while(q.size()!=0)
    {
        int now_i = q.front().first;
        int now_j = q.front().second;
        q.pop();
        for(int k=0; k<8; k++)
        {
            int i_ = now_i + dirX[k];
            int j_ = now_j + dirY[k];
            if (!(i_ == 0 || i_ > h || j_ == 0 || j > w))
            {
                if(world[i_][j_] == 1 && visited[i_][j_] == 0)
                {
                    visited[i_][j_] = 1;
                    q.push({i_, j_});
                }
            }
        }

    }
}

int main()
{
    int num;
    while (1)
    {
        cin >> w >> h;
        if(w==0 && h==0) break;
        cnt = 0;
        for (int i = 1; i <= h; i++)
        {
            for (int j = 1; j <= w; j++)
            {
                cin >> num;
                world[i][j] = num;
            }
        }

        for (int i = 1; i <= h; i++)
        {
            for (int j = 1; j <= w; j++)
            {
                if (visited[i][j] == 0 && world[i][j] == 1)
                {
                    cnt++;
                    BFS(i, j);
                }
            }
        }

        cout << cnt << "\n";

        memset(world, 0, sizeof(world));
        memset(visited, 0, sizeof(visited));

    }
}