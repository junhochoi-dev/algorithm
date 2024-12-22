#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, len = 1; cin >> N;
    string ans = "", word;
    while(N--){
        cin >> word;
        ans += (word.length() < len ? ' ' : word[len - 1]);
        len = word.length();
    }
    cout << ans;
    return 0;
}