#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, order = 1, answer = 0; cin >> N;
    loop(i, N) {
        int num; cin >> num;
        if(order == num) order++;
        else answer++;
    }
    cout << answer << endl;
    return 0;
}