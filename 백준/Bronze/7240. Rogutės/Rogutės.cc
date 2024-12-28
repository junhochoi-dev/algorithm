#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, S, speed = 0; cin >> N >> S;
    while(N--){
        int delta; cin >> delta; speed += delta;
        if(speed > S && N != 0) speed--;
    }
    cout << speed;
    return 0;
}