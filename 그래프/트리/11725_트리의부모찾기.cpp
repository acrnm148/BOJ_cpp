#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int root = 1;
vector<int> tree[100001];
queue<int> q;
int isParent[100001];

void make_tree(int node1, int node2)
{
	tree[node1].push_back(node2);
	tree[node2].push_back(node1);
}

void find_tree()
{
	q.push(1);
	isParent[1] = 1;
	while (!q.empty())
	{
		int node = q.front();
		q.pop();
		for (int i = 0; i < tree[node].size(); i++)
		{
			if (isParent[tree[node][i]] == 0)
			{
				q.push(tree[node][i]);
				isParent[tree[node][i]] = node;
			}
		}
	}
}

int main()
{
	int N, A, B;
	cin >> N;
	for (int i = 0; i < N - 1; i++)
	{
		cin >> A >> B;
		make_tree(A, B);
	}
	find_tree();
	for (int i = 2; i <= N; i++)
	{
		cout << isParent[i] << "\n";
	}

}