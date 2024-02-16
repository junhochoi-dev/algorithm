#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'

int main() {
    fastio
    while(true){
        string s;
        cin >> s;
        if(s == "*") break;
        bool check = true;
        for(int d = 1 ; d < s.size(); d++){
            map<string, bool> mp;
            loop(i, s.size() - d){
                if(mp.find(to_string(s[i]) + to_string(s[i+d])) == mp.end()){
                    mp.insert({to_string(s[i]) + to_string(s[i+d]), true});
                }
                else {
                    check = false;
                    break;
                }
            }
            if(!check) break;
        }
        if(check) cout << s + " is surprising." << endl;
        else cout << s + " is NOT surprising." << endl;
    }

    return 0;
}
