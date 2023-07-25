#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <map>
#include <set>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'
int main() {
    fastio
    while(true){
        int sz;
        cin >> sz;
        if(sz == 0) break;
        string str, initial;
        map<string, vector<string>> dict;
        for(int n = 0 ; n < sz ; n++){
            cin >> str;
            int idx = str.find(':');
            string academy = str.substr(0, idx++);
            if(n == 0) initial = academy;
            vector<string> member;
            dict.insert({academy, member});
            while(str.find(',', idx) != string::npos){
                int tmp = str.find(',', idx);
                dict[academy].push_back(str.substr(idx, tmp - idx));
                idx = tmp + 1;
            }
            dict[academy].push_back(str.substr(idx, str.find('.',idx) - idx));
        }
        set<string> st, alreadyUsed;
        queue<string> que;
        loop(n, dict[initial].size()) que.push(dict[initial][n]);
        while(!que.empty()){
            string temp = que.front();
            que.pop();
            if(dict.find(temp) == dict.end()) st.insert(temp);
            else {
                if(alreadyUsed.find(temp) == alreadyUsed.end()){
                    loop(n, dict[temp].size()) que.push(dict[temp][n]);
                    alreadyUsed.insert(temp);
                }
            }
        }
        cout << st.size() << endl;
    }
    return 0;
}