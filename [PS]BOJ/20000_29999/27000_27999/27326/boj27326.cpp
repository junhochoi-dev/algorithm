#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'

int main() {
    fastio
    int cnt[201] = {0,};
    int num, x;
    cin >> num;
    for(int n = 0 ; n < 2 * num - 1 ; n++){
        cin >> x;
        cnt[x]++;
    }
    for(int n = 1 ; n <= num ; n++){
        if(cnt[n] == 1){
            cout << n << endl;
            break;
        }
    }
    return 0;
}
