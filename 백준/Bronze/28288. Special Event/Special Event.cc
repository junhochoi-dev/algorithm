#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, cnt[5] = {0, }, maximum = 0; cin >> N;
    while(N--){
        string able; cin >> able;
        loop(i, able.size()) if(able[i] == 'Y') cnt[i]++;
        loop(i, able.size()) maximum = max(maximum, cnt[i]);
    }
    vector<int> ans;
    loop(i, 5) if(maximum == cnt[i]) ans.push_back(i + 1);
    loop(i, ans.size()){
        if(i != 0) cout << ",";
        cout << ans[i];
    }

    return 0;
}