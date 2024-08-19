#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N; cin >> N;
    loop(i, N){
        int K; cin >> K;
        int even = 0, odd = 0;
        loop(j, K){
            int num; cin >> num;
            if(num % 2 == 0) even += num;
            else odd += num;
        }
        if(even > odd) cout << "EVEN" << endl;
        else if(odd > even) cout << "ODD" << endl;
        else cout << "TIE" << endl;
    }
    return 0;
}