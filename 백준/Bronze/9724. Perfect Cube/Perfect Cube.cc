#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int T; cin >> T;
    loop(i, T){
        double a, b; cin >> a >> b;
        int s = ceil(pow(a, 1.0 / 3));
        int e = floor(pow(b, 1.0 / 3));
        cout << "Case #" << i + 1 << ": " << e - s + 1 << endl;
    }
    return 0;
}