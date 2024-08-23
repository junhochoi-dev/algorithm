#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int t1, t2, cnt = 2; cin >> t1 >> t2;
    while(t1 >= t2){
        cnt++;
        int tmp = t1 - t2;
        t1 = t2; t2 = tmp;
    }
    cout << cnt << endl;
    return 0;
}