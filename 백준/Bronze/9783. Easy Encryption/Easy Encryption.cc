#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int dp[1024 + 1][1024 + 1];
int main() {
    fastio
    string str; getline(cin, str);
    loop(i, str.size()){
        if('a' <= str[i] && str[i] <= 'z') cout << (to_string((int(str[i] - 'a') + 1)).size() == 1 ? "0" : "") + to_string((int(str[i] - 'a') + 1));
        else if('A' <= str[i] && str[i] <= 'Z') cout << int(str[i] - 'A') + 27;
        else if('0' <= str[i] && str[i] <= '9') cout << '#' << str[i];
        else cout << str[i];
    }
    return 0;
}