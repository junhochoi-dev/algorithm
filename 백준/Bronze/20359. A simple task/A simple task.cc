#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, P = 0; cin >> N;
    while(N % 2 == 0){
        N >>= 1; P++;
    }
    cout << N << " " << P << endl;
    return 0;
}
