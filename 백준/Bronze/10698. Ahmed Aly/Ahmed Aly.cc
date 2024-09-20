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
        int a, b, c;
        char op, eq;
        cin >> a >> op >> b >> eq >> c;
        cout << "Case " << i + 1 << ": ";
        cout << ((op == '+' ? a + b : a - b) == c ? "YES" : "NO") << endl;
    }
    return 0;
}