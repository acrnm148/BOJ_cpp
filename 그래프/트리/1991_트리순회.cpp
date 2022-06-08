#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<pair<char, char>> tree[10000];
string pre, in, post;

void DFS(char node)
{
	pre += node;
	char next = tree[node].front().first;
	for (int i = 0; i < 2; i ++)
	{
		if (next != '.')
			DFS(next);
		if (i == 0)
			in += node;
		next = tree[node].front().second;
	}
	post += node;
}

int main()
{
	int N;
	char parent, left, right, root;
	cin >> N;
	root = 'A';
	for (int i = 0; i < N; i++)
	{
		cin >> parent >> left >> right;
		tree[parent].push_back(make_pair(left, right));
	}
	DFS(root);
	cout << pre << "\n" << in << "\n" << post << "\n";
}