#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    bool answer = true;
    int Q, cnt = 0; cin >> Q;
    while(Q--){
        int x, y; cin >> x >> y;
        cnt += (x == 1 ? 1 : -1) * y;
        if(cnt < 0) answer = false;
    }
    cout << (answer ? "See you next month" : "Adios");
    return 0;
}

