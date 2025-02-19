#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, ans = 0; cin >> N;
    bool used[26] = {false, };
    while(N--){
        string str; cin >> str;
        used[str[0] - 'A'] = true;
    }
    loop(i, 26){
        if(!used[i]) break;
        ans++;
    }
    cout << ans;
    return 0;
}