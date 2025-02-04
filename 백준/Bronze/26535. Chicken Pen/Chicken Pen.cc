#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N; cin >> N;
    if(sqrt(N) * sqrt(N) == N) N = int(sqrt(N)) + 2;
    else N = int(sqrt(N)) + 3;
    loop(i, N) cout << "x";
    cout << endl;
    loop(i, N - 2){
        cout << "x";
        loop(j, N - 2) cout << ".";
        cout << "x" << endl;
    }
    loop(i, N) cout << "x";
    return 0;
}