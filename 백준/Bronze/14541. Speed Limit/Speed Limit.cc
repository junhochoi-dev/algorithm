#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    while(true){
        int N; cin >> N;
        if(N == -1) break;
        int prev = 0, sum = 0;
        loop(n, N){
            int speed, time; cin >> speed >> time;
            sum += speed * (time - prev);
            prev = time;
        }
        cout << sum << " miles" << endl;
    }
    return 0;
}