#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, ans = 0; cin >> N;
    loop(i, N){
        int maximum = 0;
        loop(j, N) {
            int val; cin >> val;
            maximum = max(maximum, val);
        }
        ans += maximum;
    }
    cout << ans;
    return 0;
}