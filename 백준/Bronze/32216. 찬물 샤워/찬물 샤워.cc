#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, K, T; cin >> N >> K >> T;
    vector<int> delta; delta.push_back(0);
    int temperature[1000 + 1];
    loop(i, N) {
        int val; cin >> val;
        delta.push_back(val);
    }
    loop(i, N){
        if(temperature[i] > K) temperature[i + 1] = temperature[i] + delta[i + 1] - abs(temperature[i] - K);
        else if(temperature[i - 1] < K) temperature[i + 1] = temperature[i] + delta[i + 1] + abs(temperature[i] - K);
        else temperature[i + 1] = temperature[i] + delta[i + 1];
    }
    int answer = 0;
    loop(i, N) answer += abs(temperature[i + 1] - K);
    cout << answer << endl;
    return 0;
}