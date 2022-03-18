#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int house[26][26];
int visited[26][26];
int house_cnt[700];
int N, cnt;
int dirX[4] = {0, -1, 1, 0};
int dirY[4] = {1, 0, 0, -1};

void DFS(int i, int j)
{
    visited[i][j] = 1;
    for (int k = 0; k < 4; k++)
    {
        int i_ = i + dirX[k];
        int j_ = j + dirY[k];
        if (visited[i_][j_] == 0 && house[i_][j_] == 1)
        {
            visited[i_][j_] = 1;
            DFS(i_, j_);
            cnt++;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int idx = 0;
    string input_line;
    cnt = 1;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> input_line;
        for (int j = 1; j <= N; j++)
        {
            char tmp = input_line[j-1];
            house[i][j] = tmp - '0';
        }
    }

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (visited[i][j] == 0 && house[i][j] == 1)
            {
                cnt = 1;
                DFS(i, j);
                //집의 개수 합을 배열에 저장
                house_cnt[idx] = cnt;
                idx++;
            }
        }
    }
    sort(house_cnt, house_cnt + idx);
    cout << idx <<"\n"; //총 단지 수
    for (int i = 0; i < idx; i++)
    {
        cout << house_cnt[i] << "\n";
    }
}