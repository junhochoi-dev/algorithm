#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    for(int n = 0 ; n < 5 * N ; n++){
    	for(int m = 0 ; m < 5 * N ; m++){
    		if(n >= N && n < N * 4 && m >= N && m < N * 4) cout << ' ';
			else cout << '@';
		}
		cout << endl;
	}
    return 0;
}
