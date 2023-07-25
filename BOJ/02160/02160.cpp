#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'
int compare(string s1, string s2){
    int cnt = 0;
    loop(n, 7) if(s1[n] != s2[n]) cnt++;
    return cnt;
}
int main() {
    fastio
    int sz, min_cnt = 987654321, s1, s2;
    string str[50][5];
    cin >> sz;
    loop(n, sz) loop(m, 5) cin >> str[n][m];
    loop(n, sz - 1) for(int m = n + 1 ; m < sz ; m++){
        int cnt = 0;
        loop(k, 5) cnt += compare(str[n][k], str[m][k]);
        if(min_cnt > cnt){
            min_cnt = cnt;
            s1 = n + 1;
            s2 = m + 1;
        }
    }
    cout << s1 << ' ' << s2 << endl;
    return 0;
}