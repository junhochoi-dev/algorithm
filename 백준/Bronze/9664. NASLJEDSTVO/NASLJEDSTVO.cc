#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, O, P; cin >> N >> O;
    N--; P = O / N;
    if (O - P * N == 0) cout << O + P - 1 << " " << O + P << endl;
    else cout << O + P << " " << O + P << endl;
    return 0;
}