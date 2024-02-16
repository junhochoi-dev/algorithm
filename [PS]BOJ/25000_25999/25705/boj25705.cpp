#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
int main() {
    fastio;
    int sz_in, sz_out;
    bool alphabet[26], able = true;
    for(int n = 0 ; n < 26 ; n++) alphabet[n] = false;
    string in, out;
    cin >> sz_in >> in >> sz_out >> out;
    for(int n = 0 ; n < sz_in ; n++) alphabet[in[n] - 'a'] = true;
    for(int n = 0 ; n < sz_out ; n++) {
        if(!alphabet[out[n] - 'a']){
            able = false;
            break;
        }
    }
    if(!able) cout << -1 << endl;
    else {
        deque<char> que;
        int cnt = 0, idx = 0;
        for(int n = 0 ; n < sz_in ; n++) que.push_back(in[n]);
        while(idx != sz_out){
            char tmp = que.front();
            que.push_back(tmp);
            que.pop_front();
            cnt++;
            if(que.back() != out[idx]){
                while(que.back() != out[idx]){
                    char tmp = que.front();
                    que.push_back(tmp);
                    que.pop_front();
                    cnt++;
                }
            }
            idx++;
        }
        cout << cnt << endl;
    }
    return 0;
}