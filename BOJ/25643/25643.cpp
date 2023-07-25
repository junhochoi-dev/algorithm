#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    string block, prev = "";
    int tc, sz;
    bool able = true;
    cin >> tc >> sz;
    while(tc--){
        int lsz = 1, rsz = 1;
        bool sub_able = false;
        cin >> block;
        if(prev == "") {
            prev = block;
            continue;
        }
        while(lsz <= sz){
            if(block.substr(0, lsz) == prev.substr(sz - lsz, lsz)){
                sub_able = true;
                break;
            }
            lsz++;
        }
        while(rsz <= sz){
            if(prev.substr(0, rsz) == block.substr(sz - rsz, rsz)){
                sub_able = true;
                break;
            }
            rsz++;
        }
        if(!sub_able) able = false;
        prev = block;
    }
    cout << (able ? 1 : 0) << endl;
    return 0;
}