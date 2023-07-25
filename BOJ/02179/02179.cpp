#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <map>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'
int main() {
    fastio
    int sz, max_length = 0;
    string str, prefix;
    map<string, vector<string>> dict;
    cin >> sz;
    while(sz--){
        cin >> str;
        loop(n, str.size()){
            string tmp = str.substr(0, n + 1);
            if(dict.find(tmp) == dict.end()){
                vector<string> tmp_vc;
                dict.insert({tmp, tmp_vc});
                dict[tmp].push_back(str);
            }
            else{
                if(max_length < tmp.size()){
                    max_length = tmp.size();
                    prefix = tmp;
                }
                dict[tmp].push_back(str);
            }
        }
    }
    cout << dict[prefix][0] << endl;
    loop(n, dict[prefix].size()){
        if(dict[prefix][0] != dict[prefix][n]){
            cout << dict[prefix][n] << endl;
            break;
        }
    }
    return 0;
}