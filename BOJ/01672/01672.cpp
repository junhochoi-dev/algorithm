#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'
int main() {
    fastio

    map<char, int> dict;
    dict['A'] = 0;
    dict['G'] = 1;
    dict['C'] = 2;
    dict['T'] = 3;

    char decode[4][4] = {
            {'A', 'C', 'A', 'G'},
            {'C', 'G', 'T', 'A'},
            {'A', 'T', 'C', 'G'},
            {'G', 'A', 'G', 'T'},
    };

    int sz;
    string s;
    cin >> sz >> s;
    char tmp = s[s.size() - 1];
    if(sz == 1) cout << s << endl;
    else{
        loop(n, sz){
            if(s.size() - 2 - n == 0){
                cout << decode[dict[s[s.size()-2-n]]][dict[tmp]] << endl;
                break;
            }
            tmp = decode[dict[s[s.size()-2-n]]][dict[tmp]];
        }
    }
    return 0;
}
