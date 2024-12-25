#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int U = INT_MAX, F = INT_MIN;
    string s; cin >> s;
    loop(i, s.size()) if(s[i] == 'U') U = min(U, i);
    loop(i, s.size()) if(s[i] == 'F') F = max(F, i);
    loop(i, s.size()) {
        if(i < U || F < i) cout << "-";
        else if(i == U || i == F) cout << s[i];
        else cout << "C";
    }
    return 0;
}