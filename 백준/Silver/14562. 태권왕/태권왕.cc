#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int T; cin >> T;
    while(T--){
        int S, T; cin >> S >> T;
        queue<tuple<int, int, int>> queue;
        queue.push({S, T, 0});
        while(!queue.empty()){
            tuple<int, int, int> curr = queue.front();
            int s = get<0>(curr);
            int t = get<1>(curr);
            int c = get<2>(curr);
            queue.pop();
            if(s > t) continue;
            if(s == t){
                cout << c << endl;
                break;
            }
            queue.push({s * 2, t + 3, c + 1});
            queue.push({s + 1, t, c + 1});
        }
    }
    return 0;
}

