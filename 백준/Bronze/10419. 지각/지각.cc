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
        int D, time = 0; cin >> D;
        while((time + 1) + (time + 1) * (time + 1) <= D) time++;
        cout << time << endl;
    }
    return 0;
}