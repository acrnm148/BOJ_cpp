#include <iostream>
#include <algorithm>

using namespace std;
#define MAX 100001

int size;
int first;

void heap_push(int *heap, int input)
{
	++size;
	int idx = size;
	heap[idx] = input;
	while (idx > 0)
	{
		if ((heap[idx] > heap[idx / 2]) && (idx / 2 >= first) && (idx / 2 > 0))
		{
			swap(heap[idx], heap[idx / 2]);
			idx = idx / 2;
		}
		else
			break;
	}
}

void heap_pop(int *heap)
{
	if (size <= 0)
	{
		cout << "0\n";
		return ;
	}
	++first;

	//test
	cout << "================\n";
	cout << "first : " << first << " size : " << size << "\n";
	for (int i = first; i <= size; i++)
		cout << heap[i] << "\n";
	cout << "================\n";


	
	cout << heap[first] << "\n";
	heap[first] = 0;
}

int main()
{
	int N;
	int heap[MAX] = {0, };
	int input;
	cin >> N;
	while (N--)
	{
		cin >> input;
		if (input == 0)
			heap_pop(heap);
		else
			heap_push(heap, input);
	}
}