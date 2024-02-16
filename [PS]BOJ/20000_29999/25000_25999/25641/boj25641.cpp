#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    int sz, s_sz = 0, t_sz = 0, idx = 0, length = 0;
    string st;
    cin >> sz >> st;
    for(int n = sz - 1 ; n >= 0 ; n--){
        if(st[n] == 's') s_sz++;
        if(st[n] == 't') t_sz++;

        if(s_sz == t_sz && length < s_sz + t_sz){
            idx = n;
            length = s_sz + t_sz;
        }
    }
    for(int n = idx ; n < sz ; n++) cout << st[n];
    cout << endl;
    return 0;
}