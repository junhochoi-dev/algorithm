#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, T, answer = 0; cin >> N >> T;
    int work[50]; loop(i, N) cin >> work[i];
    loop(i, N){
        if(T < work[i]) break;
        T -= work[i]; answer++;
    }
    cout << answer << endl;
    return 0;
}

