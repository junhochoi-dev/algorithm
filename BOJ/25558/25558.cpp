#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
using namespace std;
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main() {
    fastio;
    long long tc, sx, sy, ex, ey, sz, minIdx = -1;
    long long minSum = LLONG_MAX;
    vector<long long> navi;
    cin >> tc >> sx >> sy >> ex >> ey;
    for(int n = 0 ; n < tc ; n++){
    	cin >> sz;
    	long long sum = 0;
		long long prevx = sx, prevy = sy, x, y;
    	for(int m = 0 ; m < sz ; m++){
    		cin >> x >> y;
    		sum += abs(x - prevx) + abs(y - prevy);
    		prevx = x;
    		prevy = y;
		}
    	sum += abs(ex - prevx) + abs(ey - prevy);
		if(minSum > sum){
			minIdx = n + 1;
			minSum = sum;
		}
	}
	cout << minIdx << endl;
    
	return 0;
}