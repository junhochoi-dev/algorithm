#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

#define SIZE 401

int main() {
    fastio
    int attack1, life1; cin >> attack1 >> life1;
    int attack2, life2; cin >> attack2 >> life2;
    int A = life1 / attack2 + (life1 % attack2 ? 1 : 0);
    int B = life2 / attack1 + (life2 % attack1 ? 1 : 0);
    if(A > B) cout << "PLAYER A";
    else if(B > A) cout << "PLAYER B";
    else cout << "DRAW";
    return 0;
}