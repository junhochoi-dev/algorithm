#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    bool LFRT;
    while(true){
        string str; cin >> str;
        if(str == "99999") break;
        int sum = str[0] + str[1] - '0' * 2;
        if(sum != 0) LFRT = sum % 2;
        cout << (LFRT ? "left" : "right") << " ";
        cout << str.substr(2, 3) << endl;
    }
    return 0;
}