#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    vector<int> time;
    loop(i, 3){
        int h1, m1, h2, m2; cin >> h1 >> m1 >> h2 >> m2;
        time.push_back(((h2 * 60 + m2 + 24 * 60) - (h1 * 60 + m1)) % (24 * 60));
    }
    sort(time.begin(), time.end());
    cout << time[0] / 60 << ":" << (time[0] % 60 / 10 == 0 ? "0": "") << time[0] % 60 << endl;
    cout << time[2] / 60 << ":" << (time[2] % 60 / 10 == 0 ? "0": "") << time[2] % 60 << endl;
    return 0;
}