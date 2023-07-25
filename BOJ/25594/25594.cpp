#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    string str, ans;
    vector<string> nato ={
            "aespa", "baekjoon", "cau", "debug",
            "edge", "firefox", "golang", "haegang",
            "iu", "java", "kotlin", "lol", "mips",
            "null", "os", "python", "query", "roka",
            "solvedac", "tod", "unix", "virus", "whale",
            "xcode", "yahoo", "zebra"
    };
    cin >> str;
    bool able = true;
    int curr = 0;

    while(curr < str.size()){
        int idx = str[curr] - 'a';

        int sz = nato[idx].size();

        if(sz > str.size() - curr){
            able = false;
            break;
        }
        string tmp = str.substr(curr, sz);
        if(tmp == nato[idx]){
            curr += sz;
            ans += char(idx + 'a');
        }
        else{
            able = false;
            break;
        }
    }
    if(able){
        cout << "It's HG!" << endl;
        cout << ans << endl;
    }
    else cout << "ERROR!" << endl;
    return 0;
}