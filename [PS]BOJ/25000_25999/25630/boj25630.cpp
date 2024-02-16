#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    int sz, cnt = 0;
    string st;
    cin >> sz >> st;
    for(int n = 0, m = sz - 1; n < m ; n++, m--){
        if(st[n] != st[m]) cnt++;
    }
    cout << cnt << endl;
    return 0;
}