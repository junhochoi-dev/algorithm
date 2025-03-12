#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int K; cin >> K;
    loop(k, K){
        int N, W, E, ans = 0; cin >> N >> W >> E;
        while(N--){
            int A, B, C, D; cin >> A >> B >> C >> D;
            ans += max(A * W + C * E, E * D + B * W);
        }
        cout << "Data Set " << k + 1 << ":" << endl << ans << endl << endl;
    }
    return 0;
}