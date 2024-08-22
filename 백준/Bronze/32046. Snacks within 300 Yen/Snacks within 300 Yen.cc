#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    while(true){
        int N, sum = 0; cin >> N;
        if(N == 0) break;
        loop(i, N){
            int K; cin >> K;
            if(sum + K <= 300) sum += K;
        }
        cout << sum << endl;
    }
    return 0;
}