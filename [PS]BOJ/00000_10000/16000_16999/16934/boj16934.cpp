#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'

int main() {
    fastio
    int sz, idx = 1;
    string nickname;
    map<string, int> dict, alias;
    cin >> sz;
    while(sz--){
        cin >> nickname;
        if(dict.find(nickname) == dict.end() && alias.find(nickname) == alias.end()){
            bool alreadyUse = false;
            dict.insert({nickname, 1}); // name, cnt
            loop(n, nickname.size()){
                string tmp = nickname.substr(0, n + 1);
                if(alias.find(tmp) == alias.end()){
                    alias.insert({tmp, idx}); // alias, idx
                    if(!alreadyUse){
                        cout << tmp << endl;
                        alreadyUse = true;
                    }
                }
            }
        }
        else {
            if(dict.find(nickname) == dict.end()){
                dict.insert({nickname, 1});
                cout << nickname << endl;
            }
            else{
                dict[nickname]++;
                cout << nickname << dict[nickname] << endl;
            }
        }
        idx++;
    }
    return 0;
}