#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N; cin >> N;
    ll x = 1;
    while (N--) {
        ll a, b; char op; cin >> a >> op >> b;
        if (op == '+') x = (a + b) - x;
        else if (op == '-') x = (a - b) * x;
        else if (op == '*') x = (a * b) * (a * b);
        else x = (a % 2 == 0 ? a / 2 : (a + 1) / 2);
        cout << x << endl;
    }
    return 0;
}