#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (c / a + (c % a != 0 ? 1 : 0)) * (d / b + (d % b != 0 ? 1 : 0));
    return 0;
}
