#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int sz, v;
    set<string> ingredient;
    map<string, double> list;
    string s;
    cin >> sz;
    loop(n, sz){
        cin >> s >> v;
        if(ingredient.find(s)==ingredient.end()){
            ingredient.insert(s);
            list.insert({s, v});
        }
        else list[s] += v;
    }
    bool check = false;
    for(auto iter= list.begin(); iter != list.end(); iter++){
        for(auto tmp = list.begin(); tmp != list.end(); tmp++){
            if(iter == tmp) continue;
            double tmp1 = iter->second;
            double tmp2 = tmp->second;
            if(floor(tmp1 * 1.618) == tmp2 || floor(tmp2 * 1.618) == tmp1){
                check = true;
                break;
            }
        }
        if(check) break;
    }
    if(check) cout << "Delicious!" << endl;
    else cout << "Not Delicious..." << endl;
    return 0;
}
