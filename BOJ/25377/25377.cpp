#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main() {
    fastio;
    int sz, a, b, minTime = 9999;
    cin >> sz;
    while(sz--){
    	cin >> a >> b;
    	if(a <= b && b < minTime) minTime = b;
	}
	if(minTime == 9999) cout << -1 << endl;
	else cout << minTime << endl;
	return 0;
}