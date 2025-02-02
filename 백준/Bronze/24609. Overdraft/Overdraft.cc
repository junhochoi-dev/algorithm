#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, minimum = 0, curr = 0;
    cin >> N;
    while(N--){
        int x; cin >> x;
        curr += x;
        minimum = min(minimum, curr);
    }
    cout << -minimum;
    return 0;
}