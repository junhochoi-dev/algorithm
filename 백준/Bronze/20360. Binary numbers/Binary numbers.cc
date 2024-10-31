#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, idx = 0; cin >> N;
    while(N != 0){
        if(N % 2 == 1) cout << idx << " ";
        idx++; N >>= 1;
    }
    return 0;
}

