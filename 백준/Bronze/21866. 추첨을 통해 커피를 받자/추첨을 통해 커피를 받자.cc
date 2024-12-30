#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    bool hacker = false;
    int sum = 0;
    int score[9], maximum[9] = {100, 100, 200, 200, 300, 300, 400, 400, 500};
    loop(i, 9) {
        cin >> score[i];
        sum += score[i];
        hacker = hacker || score[i] > maximum[i];
    }
    cout << (hacker ? "hacker" : (sum >= 100 ? "draw" : "none"));
    return 0;
}