#include <iostream>
#include <algorithm>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    int x, y;   
    cin >> x >> y;
    if(x > y) cout << x + y << endl;
    else cout << y % x << endl;
    return 0;
}