#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    bool answer = false;
    int N, C; cin >> N >> C;
    set<int> set; int arr[5000];
    loop(i, N){
        cin >> arr[i];
        set.insert(arr[i]);
        if(C == arr[i]) answer = true;
    }
    sort(arr, arr + N);
    for(int i = 0; i < N; i++){
        if(answer) break;
        for(int j = i + 1; j < N; j++){
            if(answer) break;
            if(arr[i] + arr[j] > C) break;
            if(arr[i] + arr[j] == C) answer = true;
            int diff = C - arr[i] - arr[j];
            if(diff == arr[i] || diff == arr[j]) break;
            if(arr[i] + arr[j] < C) if(set.find(diff) != set.end()) answer = true;
        }
    }
    cout << (answer ? 1 : 0) << endl;
    return 0;
}
