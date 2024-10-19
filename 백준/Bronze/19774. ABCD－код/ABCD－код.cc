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
        string num; cin >> num;
        int prev = stoi(num.substr(0, 2));
        int next = stoi(num.substr(2, 2));
        cout << ((prev * prev + next * next) % 7 == 1 ? "YES" : "NO") << endl;
    }
    return 0;
}
