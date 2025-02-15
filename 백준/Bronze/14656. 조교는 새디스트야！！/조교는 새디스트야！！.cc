#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    vector<int> a, b;
    int N, ans = 0; cin >> N;
    loop(i, N){
        int x; cin >> x;
        a.push_back(x); b.push_back(x);
    }
    sort(b.begin(), b.end());
    loop(i, N) if(a[i] != b[i]) ans++;
    cout << ans;
    return 0;
}