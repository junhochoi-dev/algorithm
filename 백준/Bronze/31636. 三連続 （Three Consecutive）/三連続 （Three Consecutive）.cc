#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    bool answer = false;
    int N; cin >> N;
    string s; cin >> s;
    loop(i, N - 2){
        if(s[i] == 'o' && s[i + 1] == 'o' && s[i + 2] == 'o'){
            answer = true;
        }
    }
    cout << (answer ? "Yes" : "No") << endl;
    return 0;
}