#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    string a, b;
    cin >> a >> b;
    int ans = 0;
    loop(i, 4) ans += (a[i] != b[i] ? 1 : 0);
    cout << (1 << ans);
    return 0;
}