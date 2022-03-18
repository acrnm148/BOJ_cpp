#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

int house[26][26];
int visited[26][26];
int N, cnt; // cnt (집의 개수를 카운트)
int dirX[4] = {0, -1, 1, 0};
int dirY[4] = {1, 0, 0, -1};

void BFS(int i, int j)
{
    queue<pair<int, int>> q;
    visited[i][j] = 1;
    q.push({i, j});
    while (!q.empty())
    {
        int i_ = q.front().first;
        int j_ = q.front().second;
        q.pop();

        for (int k = 0; k < 4; k++)
        {
            int dir_i = i_ + dirY[k];
            int dir_j = j_ + dirX[k];
            if (dir_i == 0 || dir_i > N || dir_j == 0 || dir_j > N)
                continue;
            if (visited[dir_i][dir_j] == 0 && house[dir_i][dir_j] == 1)
            {
                visited[dir_i][dir_j] = 1;
                q.push({dir_i, dir_j});
            }
        }
        cnt++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string input_line;
    int idx = 0; //단지 수 카운트
    int house_cnt[700] = {
        0,
    }; //단지 별 집 개수 카운트

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> input_line;
        for (int j = 1; j <= N; j++)
        {
            char tmp = input_line[j - 1];
            house[i][j] = tmp - '0';
        }
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (visited[i][j] == 0 && house[i][j] == 1)
            {
                cnt = 0;
                BFS(i, j);
                house_cnt[idx] = cnt;
                idx++;
            }
        }
    }
    sort(house_cnt, house_cnt + idx);
    cout << idx << "\n";
    for (int i = 0; i < idx; i++)
    {
        cout << house_cnt[i] << "\n";
    }
}