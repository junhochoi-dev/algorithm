#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    string s; cin >> s;
    cout << s.substr(0, s.size() / 2) << " " << s.substr(s.size() / 2, s.size() / 2);
    return 0;
}