#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int T; cin >> T ;
    while(T--){
        int a, b, c; cin >> a >> b >> c;
        cout << ((
            a + b == c || a * b == c
            || a - b == c || b - a == c
            || (a / b == c && a % b == 0)
            || (b / a == c && b % a == 0))
            ? "Possible" : "Impossible") << endl;
    }
    return 0;
}