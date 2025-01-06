#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    bool answer = true;
    int conn1[5], conn2[5];
    loop(i, 5) cin >> conn1[i];
    loop(i, 5) cin >> conn2[i];
    loop(i, 5) answer = answer && conn1[i] != conn2[i];
    cout << (answer ? "Y" : "N");
    return 0;
}