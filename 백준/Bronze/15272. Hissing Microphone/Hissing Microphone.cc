#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    bool hiss = false;
    string str; cin >> str;
    for (int i = 0; i < str.size() - 1; i++) if (str[i] == 's' && str[i + 1] == 's') hiss = true;
    cout << (hiss ? "hiss" : "no hiss") << endl;
    return 0;
}