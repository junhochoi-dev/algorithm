#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    while(true){
        int prev, curr; cin >> prev >> curr;
        if(prev == 0 && curr == 0) break;
        int diff = prev - curr;
        cout << max(diff / 2 - diff % 2, 0) << " ";
        cout << (diff > 1 ? diff % 2 : 0) << endl;
    }
    return 0;
}