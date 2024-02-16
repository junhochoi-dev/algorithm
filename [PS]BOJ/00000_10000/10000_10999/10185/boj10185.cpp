#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'

int main() {
    fastio
    cout << fixed;
    cout.precision(1);
    int sz;
    double p, q;
    cin >> sz;
    loop(n, sz){
        cin >> p >> q;
        cout << "f = " << 1/(1/p+1/q) << endl;
    }
    return 0;
}
