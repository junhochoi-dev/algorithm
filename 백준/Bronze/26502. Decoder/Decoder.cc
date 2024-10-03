#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    map<char, char> map = {
        {'a', 'e'}, {'e', 'i'}, {'i', 'o'}, {'o', 'u'}, {'u', 'y'}, {'y', 'a'},
        {'A', 'E'}, {'E', 'I'}, {'I', 'O'}, {'O', 'U'}, {'U', 'Y'}, {'Y', 'A'}
    };

    int T; cin >> T;
    cin.ignore();
    while(T--){
        string str; getline(cin, str);
        loop(i, str.size()){
            str[i] = (map.find(str[i]) != map.end() ? map[str[i]] : str[i]);
        }
        cout << str << endl;
    }
    return 0;
}