#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int a, b, x, y; cin >> a >> b >> x >> y;
    if(a >= b) {
        int t = a;
        a = b;
        b = t;
    }
    if(x >= y) {
        int t = x;
        x = y;
        y = t;
    }
    cout << min(b - a, abs(x - a) + abs(y - b));
    return 0;
}