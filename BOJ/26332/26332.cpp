#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int sz, c, p;
    cin >> sz;
    while(sz--){
        cin >> c >> p;
        cout << c << ' ' << p << endl;
        if(c>=2) cout << c * p - 2 * (c - 1) << endl;
        else cout << c * p << endl;
    }
    return 0;
}
