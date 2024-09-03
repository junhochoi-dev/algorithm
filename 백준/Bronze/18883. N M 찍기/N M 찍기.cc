#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, M; cin >> N >> M;
    loop(i, N){
        loop(j, M){
            cout << i * M + j + 1;
            if(j != M - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}