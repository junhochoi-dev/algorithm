#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    string str, ans = ""; cin >> str;
    loop(i, str.size()){
        int idx = str.size() - i - 1;
        if(i % 3 == 0 && i != 0) ans = "," + ans;
        ans = str[idx] + ans;
    }
    cout << ans;
    return 0;
}