#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int T; cin >> T;
    loop(t, T){
        int N; cin >> N;
        cout << "Case " << t + 1 << ":" << endl;
        while(N--){
            int G; cin >> G;
            if(0 < G + 1 && G + 1 < 7) cout << G + 1 << endl;
        }
    }
    return 0;
}

