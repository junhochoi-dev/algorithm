#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int X, Y, N = 1; cin >> X >> Y;
    while((Y - X) * N < Y) N++;
    cout << N << endl;
    return 0;
}
