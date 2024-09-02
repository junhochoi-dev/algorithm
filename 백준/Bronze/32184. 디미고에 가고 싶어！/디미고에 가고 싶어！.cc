#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int A, B, answer = 0; cin >> A >> B;
    if(A % 2 == 0) { answer++; A++; }
    if(B % 2 != 0) { answer++; B--; }
    cout << answer + (B - A + 1) / 2 << endl;
    return 0;
}