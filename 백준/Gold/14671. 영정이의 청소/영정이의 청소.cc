#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, M, K; cin >> N >> M >> K;
    bool mold[2][2];
    while(K--){
        int x, y; cin >> x >> y;
        mold[x % 2][y % 2] = true;
    }
    bool answer = mold[0][0] && mold[0][1] && mold[1][0] && mold[1][1];
    cout <<  (answer ? "YES" : "NO");
    return 0;
}

