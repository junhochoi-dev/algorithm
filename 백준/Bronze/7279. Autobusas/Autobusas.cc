#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, K, bus = 0, answer = 0; cin >> N >> K;
    while(N--){
        int in, out; cin >> in >> out;
        bus += in - out;
        answer = max(answer, bus - K);
    }
    cout << answer << endl;
    return 0;
}