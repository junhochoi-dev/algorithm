#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int T; cin >> T;
    while(T--){
        int N, D, cnt = 0; cin >> N >> D;
        loop(n, N){
            int V, F, C; cin >> V >> F >> C;
            if(D <= V * (1.0 * F / C)) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}