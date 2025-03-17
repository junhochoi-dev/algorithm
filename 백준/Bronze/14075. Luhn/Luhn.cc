#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int sum = 0;
    string str; cin >> str;
    for (int i = 0; i < str.size(); i++) {
        int curr = str[i] - '0';
        if (i & 1) sum += curr;
        else {
            curr <<= 1;
            sum += (curr > 9 ? curr % 10 + 1 : curr);
        }
    }
    cout << (sum % 10 ? "NE" : "DA");
    return 0;
}