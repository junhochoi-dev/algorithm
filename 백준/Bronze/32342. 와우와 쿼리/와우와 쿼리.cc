#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int T; cin >> T;
    while(T--){
        string str; cin >> str;
        int answer = 0;
        if(str.size() >= 3) {
            loop(i, str.size() - 2) {
                if(str[i] == 'W' && str[i + 1] == 'O' && str[i + 2] == 'W') {
                    answer++;
                }
            }
        }
        cout << answer << endl;
    }
    return 0;
}