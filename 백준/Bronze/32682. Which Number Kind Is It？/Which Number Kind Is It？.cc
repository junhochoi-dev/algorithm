#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int T; cin >> T;
    while(T--){
        int N; cin >> N;
        string ans = "";
        if(N % 2 == 1) ans += "O";
        if(int(sqrt(N)) * int(sqrt(N)) == N) ans += "S";
        if(ans == "") ans += "EMPTY";
        cout << ans << endl;
    }
    return 0;
}