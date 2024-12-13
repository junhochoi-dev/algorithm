#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int fs, fl; cin >> fs >> fl;
    int cs, cl; cin >> cs >> cl;
    cout << ((fl <= cs || cl <= fs) ? (fl - fs + cl - cs) : (max(fl, cl) - min(fs, cs)));
    return 0;
}