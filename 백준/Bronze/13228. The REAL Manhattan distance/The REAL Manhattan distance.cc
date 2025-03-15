#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int T; cin >> T;
    while (T--) {
        int x1, x2, y1, y2, f1, f2;
        cin >> x1 >> y1 >> f1 >> x2 >> y2 >> f2;
        cout << abs(x1 - x2) + abs(y1 - y2) + f1 + f2 << endl;
    }
    return 0;
}