#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	string cmd;
	int T, A, B, next, len, root, key;
	int visited[100001] = {0, };
	cin >> T;
	while (T--)
	{
		queue<int> q;
		vector<pair<int, char>> vec[10001];
		memset(visited, 0, sizeof(visited)); //초기화
		cin >> A >> B;
		q.push(A);
		while (!q.empty())
		{
			root = q.front();
			q.pop();
			len = 0;
			next = root;
			while (next > 0)
			{
				next /= 10;
				len++;
			}
			if (len == 0)
				len = 1;

			//D
			next = (2 * root) % 10000;
			if (next >= 0 && visited[next] == 0)
			{
				visited[next] = 1;
				vec[next].push_back(make_pair(root, 'D'));
				q.push(next);
			}
			//S
			next = root - 1;
			if (next == -1)
				next = 9999;
			if (next >= 0 && visited[next] == 0)
			{
				visited[next] = 1;
				vec[next].push_back(make_pair(root, 'S'));
				q.push(next);
			}
			//L
			//int num = pow(10, len - 1);
			//next = root % num * 10 + root / num;
			next = root % 1000 * 10 + root / 1000;
			if (next >= 0 && next < 10000 && visited[next] == 0)
			{
				visited[next] = 1;
				vec[next].push_back(make_pair(root, 'L'));
				q.push(next);
			}
			//R
			//next = root / 10 + (root % 10 * pow(10, len - 1));
			next = root % 10 * 1000 + root / 10;
			if (next >= 0 && next < 10000 && visited[next] == 0)
			{
				visited[next] = 1;
				vec[next].push_back(make_pair(root, 'R'));
				q.push(next);
			}
			if (visited[B] != 0)
			{
				string ans;
				key = B;
				while (key != A)
				{
					//cout << "key : " << key << "\n";
					ans += vec[key].front().second;
					key = vec[key].front().first;
				}
				reverse(ans.begin(), ans.end());
				cout << ans << "\n";
				break;
			}
		}
	}
}