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
    loop(t, T){
        int N; cin >> N;
        vector<int> peak;
        while(N--){
            int p; cin >> p;
            peak.push_back(p);
        }
        int ans = 0;
        loop(i, peak.size()){
            if(i == 0 || i == peak.size() - 1) continue;
            if(peak[i - 1] < peak[i] && peak[i] > peak[i + 1]) ans++;
        }
        cout << "Case #" << t + 1 << ": " << ans << endl;
    }
    return 0;
}