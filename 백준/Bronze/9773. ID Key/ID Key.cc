#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

#define SIZE 401

int main() {
    fastio
    int N; cin >> N;
    while(N--){
        string str; cin >> str;
        int ans1 = 0;
        loop(i, str.size()) ans1 += str[i] - '0';
        int ans2 = stoi(str.substr(10, 3)) * 10;
        int ans3 = ans1 + ans2;
        if(ans3 < 1000) ans3 += 1000;
        string ans = to_string(ans3);
        cout << ans.substr(ans.size() - 4, 4) << endl;
    }
    return 0;
}