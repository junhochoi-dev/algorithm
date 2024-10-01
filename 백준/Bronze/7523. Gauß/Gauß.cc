#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int T; cin >> T;
    loop(i, T){
        ll a, b; cin >> a >> b;
        cout << "Scenario #" << i + 1 << ":" << endl;
        cout << ((a + b) * (b - a + 1)) / 2 << endl << endl;
    }
    return 0;
}