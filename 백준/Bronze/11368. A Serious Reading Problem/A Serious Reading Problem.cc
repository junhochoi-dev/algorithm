#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int C, W, L, P;
    while(true){
        cin >> C >> W >> L >> P;
        if(C == 0 && W == 0 && L == 0 && P == 0) break;
        cout << (C == 1 ? 1 : int(pow(C, W * L * P))) << endl;
    }
    return 0;
}