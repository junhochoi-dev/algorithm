#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

#define SIZE 401

int main() {
    fastio
    int T; cin >> T;
    vector<int> internet;
    while(T--){
        int T, M; cin >> T >> M;
        if(M == 1) internet.push_back(T);
    }
    int ans = 0;
    loop(i, internet.size() - 1) ans = max(ans, internet[i + 1] - internet[i]);
    cout << ans;
    return 0;
}