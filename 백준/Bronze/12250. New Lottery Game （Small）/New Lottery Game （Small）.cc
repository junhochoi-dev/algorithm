#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int T; cin >> T;
    loop(t, T){
        int A, B, K, ans = 0; cin >> A >> B >> K;
        loop(a, A){
            loop(b, B){
                if((a & b) < K) ans++;
            }
        }
        cout << "Case #" << t + 1 << ": " << ans << endl;
    }
    return 0;
}