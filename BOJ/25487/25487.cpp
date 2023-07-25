#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int sz, a, b, c;
    cin >> sz;
    while(sz--){
    	cin >> a >> b >> c;
    	cout << min(a, min(b, c)) << endl;
	}
    return 0;
}