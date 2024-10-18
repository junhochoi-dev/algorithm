#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, answer = 0; cin >> N;
    int arr[100]; loop(i, N) cin >> arr[i];
    loop(i, N - 1) if(arr[i + 1] > arr[i]) answer++;
    cout << answer << endl;
    return 0;
}
