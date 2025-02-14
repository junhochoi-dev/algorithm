#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, K, cnt = 0; cin >> N >> K;
    vector<int> arr;
    loop(i, N){
        int x; cin >> x;
        arr.push_back(x);
        if(i > 0 && arr[i - 1] - arr[i] >= K) cnt++;
    }
    cout << cnt;
    return 0;
}