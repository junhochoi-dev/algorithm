#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int a, b, ans = 0; cin >> a >> b;
    while (a != b) {
        int tmpa = max(a, b) - min(a, b);
        int tmpb = min(a, b);
        a = tmpa; b = tmpb;
        ans++;
    }
    cout << ans;
    return 0;
}