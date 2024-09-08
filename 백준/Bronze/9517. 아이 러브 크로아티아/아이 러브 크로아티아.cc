#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int K, N, now = 0; cin >> K >> N; K--;
    while(N--){
        int time; char type; cin >> time >> type;
        now += time;
        if(now >= 210){
            cout << K + 1 << endl;
            break;
        }
        if(type == 'T') K = (K + 1) % 8;
    }
    return 0;
}