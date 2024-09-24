#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int num[100 + 1] = {0, }, basket[100 + 1] = {0, };
    int N, M; cin >> N >> M;
    while(M--){
        int s, e, n; cin >> s >> e >> n;
        for(int i = s; i <= e; i++){
            if(basket[i] != 0) num[basket[i]]--;
            basket[i] = n; num[n]++;
        }
    }
    loop(i, N) cout << basket[i + 1] << " ";
    return 0;
}