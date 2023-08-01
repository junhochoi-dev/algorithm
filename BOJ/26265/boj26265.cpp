#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int sz;
    set<string> mentor;
    map<string, vector<string>> mentee;
    string s1, s2;
    cin >> sz;
    while(sz--){
        cin >> s1 >> s2;
        if(mentor.find(s1) == mentor.end()){
            mentor.insert(s1);
            vector<string> tmp;
            mentee.insert(make_pair(s1, tmp));
        }
        mentee[s1].push_back(s2);
    }
    for(auto iter = mentor.begin(); iter!=mentor.end();iter++){
        sort(mentee[*iter].begin(),mentee[*iter].end(), greater<>());
        for(int n = 0 ; n < mentee[*iter].size(); n++){
            cout << *iter << ' ' << mentee[*iter][n] << endl;
        }
    }
    return 0;
}
