#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int T, S, H; cin >> T >> S >> H;
    loop(t, T){
        cout << "*";
        loop(j, S) cout << " ";
        cout << "*";
        loop(j, S) cout << " ";
        cout << "*" << endl;
    }
    loop(i, 2 * S + 3) cout << "*";
    cout << endl;
    loop(i, H){
        loop(j, S + 1) cout << " ";
        cout << "*" << endl;
    }
    return 0;
}