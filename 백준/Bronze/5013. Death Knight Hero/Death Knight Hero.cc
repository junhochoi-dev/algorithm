#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

#define SIZE 401

int main() {
    fastio
    int N, ans = 0; cin >> N;
    while(N--){
        string str; cin >> str;
        bool win = true;
        loop(i, str.size() - 1) win = win && !(str[i] == 'C' && str[i + 1] == 'D');
        if(win) ans++;
    }
    cout << ans;
    return 0;
}