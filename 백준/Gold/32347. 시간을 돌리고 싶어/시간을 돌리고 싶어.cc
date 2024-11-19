#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int timemachine[200000 + 1];
int direction[200000 + 1];
int main() {
    fastio
    int N, K, answer = INT_MAX; cin >> N >> K;
    loop(i, N) cin >> timemachine[i + 1];
    int idx = N;
    for(int i = N; i >= 1; i--){
        if(timemachine[i]) idx = i;
        direction[i] = idx;
    }
    int low = 1, high = N;
    while(low <= high){
        int mid = (low + high) / 2;
        int curr = N, cnt = 0;
        while(curr != 1 && cnt < K){
            if(timemachine[curr]){
                curr = max(curr - mid, 1);
                cnt++;
            }else curr = direction[curr];
        }
        if(curr == 1){
            high = mid - 1;
            answer = min(answer, mid);
        }else{
            low = mid + 1;
        }
    }
    cout << answer << endl;
    return 0;
}