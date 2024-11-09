#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N; cin >> N;
    int MINIMUM = N, MAXIMUM = 1;
    for(int i = 2; i < N; i++) {
        if(N % i) { MINIMUM = i; break; }
    }
    for(int i = N - 1; i >= 2; i--) {
        if(N % i) { MAXIMUM = i; break; }
    }
    cout << MINIMUM << " " << MAXIMUM;
    return 0;
}

