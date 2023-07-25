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
	int R, S;
	cin >> R >> S;
	int sum  = R * 8 + S * 3;
	if(sum > 28) cout << sum - 28 << endl;
	else cout << 0 << endl;
    return 0;
}