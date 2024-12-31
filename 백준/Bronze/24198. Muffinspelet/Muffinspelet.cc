#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, A = 0, B = 0, order = 0; cin >> N;
    while(N){
        if(order) A += N - (N >> 1);
        else B += N - (N >> 1);
        order ^= 1;
        N >>= 1;
    }
    cout << A << " " << B;
    return 0;
}