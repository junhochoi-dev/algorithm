#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, arr[100000 + 1]; cin >> N;
    loop(i, N) cin >> arr[i];
    sort(arr, arr + N);
    cout << arr[0] + arr[1];
    return 0;
}