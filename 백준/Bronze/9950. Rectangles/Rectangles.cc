#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    while(true){
        int l, w, a; cin >> l >> w >> a;
        if(l == 0 && w == 0 && a == 0) break;
        if(l == 0) l = a / w;
        if(w == 0) w = a / l;
        if(a == 0) a = l * w;
        cout << l << " " << w << " " << a << endl;
    }
    return 0;
}