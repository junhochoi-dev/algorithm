#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int c[31][31]; // 30 30
    int N, M;
    cin >> N >> M;
    for(int n = 0 ; n <= 30 ; n++){
    	for(int m = 0 ; m <= n ; m++){
    		if(m == 0 || m == n) c[n][m] = 1;
    		else {
    			c[n][m] = c[n - 1][m] + c[n - 1][m - 1];
			}
		}
	}
	cout << c[M-1][N-1] << endl;
    return 0;
}