#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int sz;
    string s;
    cin >> sz;
    while(sz--){
        char prev = '#';
        cin >> s;
        for(int n = 0 ; n < s.size(); n++){
            if(prev != s[n]) cout << s[n];
            prev = s[n];
        }
        cout << endl;
    }
    return 0;
}
