#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int bill[] = {1, 5, 10, 20, 50, 100};
    int maximum_sum = 0, maximum_cnt = INT_MAX, ans = 0;
    loop(i, 6){
        int cnt; cin >> cnt;
        if(maximum_sum < bill[i] * cnt){
            maximum_sum = bill[i] * cnt;
            maximum_cnt = cnt;
            ans = bill[i];
        } else if(maximum_sum == bill[i] * cnt){
            if(maximum_cnt > cnt){
                maximum_cnt = cnt;
                ans = bill[i];
            }
        }
    }
    cout << ans;
    return 0;
}