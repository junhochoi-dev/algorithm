#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N; cin >> N;
    string work; cin >> work;
    map<char, int> direction;
    loop(i, N) direction[work[i]]++;
    cout << N - max({direction['N'], direction['S'], direction['W'], direction['E']});
    return 0;
}
