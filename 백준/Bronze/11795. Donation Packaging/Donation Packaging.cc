#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

#define SIZE 401

int main() {
    fastio
    int T, SETA = 0, SETB = 0, SETC = 0; cin >> T;
    while(T--){
        int A, B, C; cin >> A >> B >> C;
        SETA += A; SETB += B, SETC += C;
        int packages = min({SETA, SETB, SETC});
        if(packages < 30) cout << "NO" << endl;
        else{
            cout << packages << endl;
            SETA -= packages; SETB -= packages; SETC -= packages;
        }
    }
    return 0;
}