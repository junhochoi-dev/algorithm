#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int K, D, ans = 0; cin >> K >> D;
    while (D >= 0) D -= K * (1 << ans++);
    cout << ans - 1;
    return 0;
}