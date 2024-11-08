#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N; cin >> N;
    int stopwatch[1000];
    loop(i, N) cin >> stopwatch[i];
    if(N & 1) cout << "still running";
    else{
        int answer = 0;
        for(int i = 0; i < N; i += 2) answer += stopwatch[i + 1] - stopwatch[i];
        cout << answer;
    }
    return 0;
}

