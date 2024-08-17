#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N; cin >> N;
    int b1, b2; cin >> b1 >> b2;
    bool answer = false;
    while(N--){
        int lx, ly, hx, hy; cin >> lx >> ly >> hx >> hy;
        if(lx <= b1 && b1 <= hx && ly <= b2 && b2 <= hy) answer = true;
    }
    cout << (answer ? "Yes" : "No");
    return 0;
}
