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
        int N, A, B; cin >> N >> A >> B;
        cout << max(A - B, 0) << " " << min(N - B, A) << endl;
    }
    return 0;
}