#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int kimbab[1000000];
int main() {
    fastio
    int T, answer = 0; cin >> T;
    while(T--){
        int integer; cin >> integer;
        if(integer % 2 == 0) continue;
        answer++;
    }
    cout << answer << endl;
    return 0;
}
