#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    int tc, gomgomCnt = 0;
    string user;
    map<string, int> dict, dict_empty;
    cin >> tc;
    while(tc--){
        cin >> user;
        if(user == "ENTER") {
            dict = dict_empty;
            continue;
        }
        if(dict.find(user) == dict.end()){
            dict.insert({user, 1});
            gomgomCnt++;
        }
        else dict[user]++;
    }
    cout << gomgomCnt << endl;
    return 0;
}