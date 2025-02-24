#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    while(true){
        int N; cin >> N;
        if(N == 0) break;
        cout << N << " => " << N * N - (N - 1) << endl;
    }
    return 0;
}