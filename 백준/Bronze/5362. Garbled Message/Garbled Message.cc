#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    string str;
    while(getline(cin, str)){
        loop(i, str.size()){
            if(i + 4 < str.size()
                && str[i] == 'i'
                && str[i + 1] == 'i'
                && str[i + 2] == 'i'
                && str[i + 3] == 'n'
                && str[i + 4] == 'g'
            ){
                cout << "th";
                i += 4;
            } else cout << str[i];
        }
        cout << endl;
    }
    return 0;
}