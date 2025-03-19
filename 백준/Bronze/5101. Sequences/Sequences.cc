#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    while(true){
        int a, b, c; cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) break;
        if((c - a) % b == 0 && 0 <= (c - a) / b) cout << (c - a) / b + 1 << endl;
        else cout << "X" << endl;
    }
    return 0;
}