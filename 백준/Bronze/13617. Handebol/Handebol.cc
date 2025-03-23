#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, M, ans = 0; cin >> N >> M;
    while(N--){
        bool alltimescore = true;
        loop(m, M) {
            int goal; cin >> goal;
            if(goal == 0) alltimescore = false;
        }
        if(alltimescore) ans++;
    }
    cout << ans;
    return 0;
}