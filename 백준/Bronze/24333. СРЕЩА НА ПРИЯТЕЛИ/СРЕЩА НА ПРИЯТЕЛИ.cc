#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int l1, r1, l2, r2, k, ans = 0;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    for(int i = 1; i <= 50000; i++){
        if(l1 <= i && i <= r1 && l2 <= i && i <= r2 && i != k){
            ans++;
        }
    }
    cout << ans;
    return 0;
}