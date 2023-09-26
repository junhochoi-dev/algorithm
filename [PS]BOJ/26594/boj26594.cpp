#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int maximum = 0;
    string s;
    cin >> s;
    int alphabet[26]={0,};
    for(int n = 0 ; n < s.size();n++){
        alphabet[s[n]-'A']++;
        maximum = max(maximum, alphabet[s[n]-'A']);
    }
    cout << maximum << endl;
    return 0;
}
