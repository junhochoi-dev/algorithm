#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, P, S; cin >> N >> P >> S;
    while(S--){
        int M; cin >> M;
        bool exist = false;
        while(M--){
            int card; cin >> card;
            if(card == P) exist = true;
        }
        cout << (exist ? "KEEP" : "REMOVE") << endl;
    }
    return 0;
}