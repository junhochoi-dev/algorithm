#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int answer = 0, N, M; cin >> N >> M;
    int Makgeolli[10000];
    loop(i, N) cin >> Makgeolli[i];
    unsigned int low = 0, high = INT_MAX;
    while(low <= high){
        int mid = (low + high) / 2;
        int cnt = 0;
        loop(i, N) cnt += Makgeolli[i] / mid;
        if(cnt >= M){
            low = mid + 1;
            answer = max(answer, mid);
        } else high = mid - 1;
    }
    cout << answer << endl;
    return 0;
}
