#include<iostream>
#include<algorithm>
using namespace std;
#define max 15
int main() {
	int T,k,n; //nÈ£ kÃþ
	int a[max][max];
	a[0][0] = 0;
	
	scanf("%d", &T);
	while (T--){
		scanf("%d", &k);
		scanf("%d", &n);

		for (int x = 1; x < max; x++) {
			for (int y = 0; y < max; y++) {
				if (x == 1) a[x][y] = 1;
				else if (y == 0) a[x][y] = x;
				else a[x][y] = a[x - 1][y] + a[x][y - 1];
			}
		}

		cout << a[n][k] << endl;
	}
}