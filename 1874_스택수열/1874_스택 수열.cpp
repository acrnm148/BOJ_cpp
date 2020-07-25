#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;

int main() {
	stack <int> s;
	
	vector <char> charr;
	int n, num = 0, count=0, state,tmp,top;
	scanf("%d", &n);
	vector <int> arr(n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		s.push(i + 1);
		top = s.top();
		charr.push_back('+');
		count++;
		if (arr[num] == s.top()) {
			for (int j = i; j >= 0; j--) {
				top = s.top();
				if (arr[num] == top) {
					s.pop();
					charr.push_back('-');
					count--;
					num++;
				}
			}
		}
	}
	for (int i = 0; i < count; i++) {
		if(s.top() == arr[num]){
			s.pop();
			charr.push_back('-');
			num++;
		}
		else break;
		state = 1;
	}
	if (state == 1) for(int i=0; i<charr.size(); i++) cout << charr[i] << endl;
	else cout << "NO" << endl;
}
