#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int h, m, s, q; cin >> h >> m >> s >> q;
    while(q--){
        int T; cin >> T;
        if(T == 1 || T == 2){
            int c; cin >> c;
            if(T == 2) c *= -1;
            h += c / 3600;
            c %= 3600;
            m += c / 60;
            c %= 60;
            s += c;
            while(s < 0){
                s += 60;
                m--;
            }
            while(m < 0){
                m += 60;
                h--;
            }
            while(h < 0) h += 24;
            while(59 < s){
                s -= 60;
                m++;
            }
            while(59 < m){
                m -= 60;
                h++;
            }
            while(23 < h) h -= 24;
        }
        else cout << h << " " << m << " " << s << endl;
    }
    return 0;
}