#include <iostream>
#include <vector>
#include <cstring> //for memset
using namespace std;

int choose[100001];  //선택한 학생번호
int visited[100001]; //방문기록
int done[100001];    //사이클이니까 탐색 넘어가라
int n;
int cnt; //사이클에 속한 학생수

void DFS(int i)
{
    visited[i] = 1;
    int next = choose[i];
    
    if (visited[next] == 0)
    {
        visited[next] = 1;
        DFS(next);
    }
    else if (visited[next] == 1) //이미 방문했던 앤데
    {
        if (done[next] == 0) //사이클이 안끝난 애네?
        {
            //사이클 안에 학생 수 세자
            //사이클이니까 현재 i == next이다
            for (int k = next; k != i; k = choose[k])
            {
                cout << "next : " <<next <<"  " << "k : " <<k <<"  "<<"i : " <<i <<"  "<<"choose[k] : " <<choose[k]<<"\n";
                cnt++;
                cout << "cnt : " <<cnt <<endl;
            }
            cnt++;

            
        } //사이클일 땐 그냥 넘어감   
    }
    done[i] = 1; 
    //else if를 가지 않고 바로 여기에 왔다 = 사이클이 아니고 도중에 끊겼다.
    //그래서 여기는 더 이상 탐방안해도 된다.
}

int main()
{
    int T, tmp;
    cin >> T;
    while (T--)
    {
        cin >> n;
        cnt = 0;

        //인접리스트
        for (int i = 1; i <= n; i++)
        {
            cin >> choose[i];
        }

        // DFS 실행
        for (int i = 1; i <= n; i++)
        {
            //방문도 안했고 사이클도 아닐 때
            if (visited[i] == 0 && done[i] == 0)
                DFS(i);
        }
        cout << n-cnt <<"\n";

        //초기화
        memset(choose, 0, sizeof(choose));
        memset(visited, 0, sizeof(visited));
        memset(done, 0, sizeof(done));
    }
}