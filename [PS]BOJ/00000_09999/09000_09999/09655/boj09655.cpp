#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main() {
    fastio;
    int x;
    cin >> x;
    cout << (x % 2 == 0 ? "CY" : "SK") << endl;
	return 0;
}