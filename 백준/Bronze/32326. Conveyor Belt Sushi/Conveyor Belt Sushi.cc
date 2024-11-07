#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int answer = 0;
    loop(i, 3) {
        int v; cin >> v;
        answer += v * (i + 3);
    }
    cout << answer;
    return 0;
}

