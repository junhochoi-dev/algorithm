#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int kimbab[1000000];
int main() {
    fastio
    int N, K, M, answer = 0; cin >> N >> K >> M;
    loop(i, N) cin >> kimbab[i];
    int low = 1, high = 1000000000;
    while(low <= high){
        int mid = (low + high) / 2;
        int cnt = 0;
        loop(i, N){
            if(kimbab[i] < K) continue;
            if(kimbab[i] >= 2 * K) cnt += (kimbab[i] - 2 * K) / mid;
            else cnt += (kimbab[i] - K) / mid;
        }
        if(cnt >= M){
            low = mid + 1;
            answer = max(answer, mid);
        } else high = mid - 1;
    }
    cout << (answer == 0 ? -1 : answer) << endl;
    return 0;
}
