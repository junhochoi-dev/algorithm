#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int A, answer = 0, K; cin >> A >> K;
    while(K != A) {
        if(!(K & 1) && K / 2 >= A) K >>= 1;
        else K--;
        answer++;
    }
    cout << answer << endl;
    return 0;
}