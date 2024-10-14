#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, M; cin >> N >> M;
    int arr[100000]; loop(i, N) cin >> arr[i]; sort(arr, arr + N);
    while(M--){
        int s, e; cin >> s >> e;
        cout << upper_bound(arr, arr + N, e) - lower_bound(arr, arr + N, s)<< endl;
    }
    return 0;
}
