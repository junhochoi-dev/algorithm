#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int H, M; cin >> H >> M;
    loop(i, M){
        int t = i + 1;
        int val = -6 * pow(t, 4) + H * pow(t, 3) + 2 * pow(t, 2) + t;
        if(val <= 0) {
            cout << "The balloon first touches ground at hour: " << t << endl;
            return 0;
        }
    }
    cout << "The balloon does not touch ground in the given time." << endl;
    return 0;
}