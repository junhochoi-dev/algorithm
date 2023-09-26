#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    char ch;
    int r_min, r_max, c_min, c_max, N, cnt = 0;
    cin >> N;
    bool check = false;
    loop(n, N) loop(m, N) {
        cin >> ch;
        if(ch == 'G') {
            cnt++;
            if(!check){
                r_min = r_max = n;
                c_min = c_max = m;
                check = true;
            }
            else{
                r_min = min(r_min, n);
                r_max = max(r_max, n);
                c_min = min(c_min, m);
                c_max = max(c_max, m);
            }
        }
    }
    if(cnt == 1) cout << 0 << endl;
    else {
        int ans = r_max - r_min + c_max - c_min;
        if(r_min != r_max) ans += min(r_min, N - 1 - r_max);
        if(c_min != c_max) ans += min(c_min, N - 1 - c_max);
        cout << ans << endl;
    }
    return 0;
}
