#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int a, b, A = 0, B = 0, ASIZE, BSIZE; cin >> a >> b;
    ASIZE = to_string(a).size();
    BSIZE = to_string(b).size();
    while(a){ A += a % 10 * ASIZE; a /= 10; }
    while(b){ B += b % 10 * BSIZE; b /= 10; }
    if(A > B) cout << 1 << endl;
    else if(A < B) cout << 2 << endl;
    else cout << 0 << endl;
    return 0;
}