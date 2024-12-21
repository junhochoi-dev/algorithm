#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N; cin >> N;
    loop(i, N){
        string first; cin >> first;
        string last; cin >> last;
        cout << "Case " << i + 1 << ": " << last << ", " << first << endl;
    }
    return 0;
}