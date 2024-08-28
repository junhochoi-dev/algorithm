#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, height = 0; cin >> N;
    loop(i, N){
        int a, b; cin >> a >> b;
        height += (a - b);
        cout << height << endl;
    }
    return 0;
}