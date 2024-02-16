#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'
int main() {
    fastio
    bool overnum[5000] = {false, };
    for(int n = 1 ; n <= 5000 ; n++){
        int sum = 0;
        for(int m = 1; m <= sqrt(n); m++){
            if(n % m == 0) sum += m + n / m;
        }
        sum -= n;
        if(sqrt(n) == int(sqrt(n))) sum -= sqrt(n);

        if(sum > n) overnum[n] = true;
    }
    int tc;
    cin >> tc;
    while(tc--){
        int x;
        cin >> x;
        bool check = true;
        if(overnum[x]) {
            for(int n = 2; n <= sqrt(x) ; n++){
                if(x % n == 0 && !(!overnum[n] && !overnum[x/n])){
                    check = false;
                    break;
                }
            }
        }
        else check = false;

        if(check) cout << "Good Bye" << endl;
        else cout << "BOJ 2022" << endl;
    }
    return 0;
}
