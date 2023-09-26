#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    string s;
    while(getline(cin, s)){
        for(int n = 0 ; n < s.size() ; n++){
            if(s[n] == 'i') cout << 'e';
            else if(s[n] == 'e') cout << 'i';
            else if(s[n] == 'I') cout << 'E';
            else if(s[n] == 'E') cout << 'I';
            else cout << s[n];
        }
        cout << endl;
    }
    return 0;
}
