#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N; cin >> N;
    vector<int> YES, NO;
    YES.push_back(0); YES.push_back(1);
    NO.push_back(0); NO.push_back(0);
    for(int n = 1; n <= N; n++){
        int q, x, y; cin >> q >> x >> y; x--;
        bool ans = (q == 1 ? (y - x == YES[y] - YES[x]) : (y - x == NO[y] - NO[x]));
        cout << (ans ? "Yes" : "No") << endl;
        YES.push_back(YES[n] + (ans ? 1 : 0));
        NO.push_back(NO[n] + (!ans ? 1 : 0));
    }
    return 0;
}

