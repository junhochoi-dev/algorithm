#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
	int sum = 0, val;
	while(true){
		cin >> val;
		if(val == -1) break;
		sum += val;
	}
	cout << sum << endl;
    return 0;
}