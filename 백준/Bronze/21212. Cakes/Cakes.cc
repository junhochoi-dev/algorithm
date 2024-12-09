#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, answer = INT_MAX; cin >> N;
    while(N--){
        int need, exist; cin >> need >> exist;
        answer = min(answer, exist / need);
    }
    cout << (answer == INT_MAX ? 0 : answer);
    return 0;
}