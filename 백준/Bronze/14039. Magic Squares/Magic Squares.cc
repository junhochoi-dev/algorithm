#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int arr[4][4];
    vector<int> v, h;
    loop(i, 4) loop(j, 4) cin >> arr[i][j];
    loop(i, 4){
        int hsum = 0, vsum = 0;
        loop(j, 4){
            vsum += arr[i][j];
            hsum += arr[j][i];
        }
        h.push_back(hsum);
        v.push_back(vsum);
    }
    bool ans = true;
    loop(i, h.size() - 1) ans = ans && (h[i] == h[i + 1]);
    loop(i, v.size() - 1) ans = ans && (v[i] == v[i + 1]);
    cout << (ans ? "magic" : "not magic");
    return 0;
}