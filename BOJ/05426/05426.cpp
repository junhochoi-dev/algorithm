#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'

int main() {
    fastio
    int tc;
    cin >> tc;
    while(tc--){
        string str;
        cin >> str;
        int sz = sqrt(str.size());
        loop(n, sz){
            for(int m = sz - 1 - n ; m < str.size() ; m += sz){
                cout << str[m];
            }
        }
        cout << endl;
    }
    return 0;
}