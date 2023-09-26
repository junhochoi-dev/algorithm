#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long N, M, a, K;
    long long max, min;
    cin >> N >> M >> a >> K;
    if(a - K >= N - 1){
    	max = N - 1 + 1;
    	if((a - K) % M == 0) min = (a - K) / M + 1;
		else min = (a - K) / M + 1 + 1; 
	}
	else{
		max = a - K + 1;
		if(a - K == 0) min = 1;
    	else if((a - K) % M == 0) min = (a - K) / M + 1;
		else min = (a - K) / M + 1 + 1; 
	}
	cout << max << ' ' << min << endl;
    return 0;
}