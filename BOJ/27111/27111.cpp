#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'
int main() {
    fastio
    bool inout[200001];
    loop(n, 200001) inout[n] = false;
    int sz, cnt = 0, num, scan, in=0;
    cin >> sz;
    loop(n, sz){
        cin >> num >> scan;
        if(scan == 0){
            if(!inout[num]) cnt++;
            inout[num] = false;
        }
        else { // 1
            if (inout[num]) cnt++;
            inout[num] = true;
        }
    }
    loop(n, 200001) if(inout[n]) cnt++;
    cout << cnt << endl;
    return 0;
}
