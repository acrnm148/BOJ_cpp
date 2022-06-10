#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

#define INF 2147483647

vector<pair<int, int>> graph[1005];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
int dist[1005];

int main()
{
	int N, M, A, B, C, s, e, node, cost, n_node, n_cost;
	cin >> N >> M;
	fill(dist, dist + N + 1, INF);
	for (int i = 0; i < M; i++)
	{
		cin >> A >> B >> C;
		graph[A].push_back(make_pair(C, B));
	}
	cin >> s >> e;
	pq.push(make_pair(0, s));
	dist[s] = 0;
	while (!pq.empty())
	{
		node = pq.top().second;
		cost = pq.top().first;
		pq.pop();
		if (dist[node] < cost) continue;
		for (int i = 0; i < graph[node].size(); i++)
		{
			n_node = graph[node][i].second;
			n_cost = graph[node][i].first + cost;
			if (n_cost < dist[n_node])
			{
				dist[n_node] = n_cost;
				pq.push(make_pair(n_cost, n_node));
			}
		}
	}
	cout << dist[e] << "\n";
}