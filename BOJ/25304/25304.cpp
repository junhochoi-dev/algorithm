#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int sum, kind, price, cnt;
    cin >> sum >> kind;
    for(int n = 0 ; n < kind ; n++){
    	cin >> price >> cnt;
    	sum -= price * cnt;
	}
	if(sum == 0) cout << "Yes" << endl;
	else cout << "No" << endl;
    return 0;
}
