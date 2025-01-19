#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

#define SIZE 401

int main() {
    fastio
    int T; cin >> T;
    loop(t, T){
        int N, M; cin >> N >> M;
        cout << "Case " << t + 1 << ": " << M - N + 1 << endl;
    }
    return 0;
}