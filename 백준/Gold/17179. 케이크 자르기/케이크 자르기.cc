#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, M, L; cin >> N >> M >> L;
    int part[1000]; loop(i, M) cin >> part[i];
    while(N--){
        int cut; cin >> cut;
        int minimum = INT_MAX;
        int low = 0, high = L;
        while(low <= high){
            int mid = (low + high) / 2;
            int prev = 0, cnt = 0;
            loop(i, M){
                if(part[i] - prev < mid) continue;
                prev = part[i]; cnt++;
            }
            if(cnt == cut && L - prev < mid) cnt--;
            if(cnt < cut) high = mid - 1;
            else low = mid + 1;
        }
        cout << high << endl;
    }
    return 0;
}