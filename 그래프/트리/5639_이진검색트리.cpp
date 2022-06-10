#include <iostream>
#include <vector>
using namespace std;

int tree[1000001][2];
int root;

void postorder(int node)
{
	for (int i = 0; i < 2; i++)
	{
		if (tree[node][i] != 0)
			postorder(tree[node][i]);
	}
	cout << node << "\n";
}

void make_tree(int parent, int node)
{
	if (node < parent)
	{
		if (tree[parent][0] == 0)
			tree[parent][0] = node;
		else
			make_tree(tree[parent][0], node);
	}
	else if (node > parent)
	{
		if (tree[parent][1] == 0)
			tree[parent][1] = node;
		else
			make_tree(tree[parent][1], node);
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int n;
	while (cin >> n)
	{
		if (root == 0)
			root = n;
		make_tree(root, n);
	}
	postorder(root);
}