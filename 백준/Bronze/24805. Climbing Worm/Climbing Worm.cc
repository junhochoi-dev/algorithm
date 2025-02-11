#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int cnt = 0, curr = 0;
    int A, B, H; cin >> A >> B >> H;
    while(true){
        curr += A; cnt++;
        if(curr >= H) break;
        curr -= B;
    }
    cout << cnt;
    return 0;
}