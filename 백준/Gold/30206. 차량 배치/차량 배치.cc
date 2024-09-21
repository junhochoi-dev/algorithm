#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    vector<int> depth, dist;
    vector<vector<int>> node;
    int MOD = 1000000007;
    int N, M; cin >> N >> M;
    loop(i, N + 1){
        depth.push_back(0), dist.push_back(INT_MAX);
        node.push_back(vector<int>());
    }
    while(M--){
        int a, b; cin >> a >> b;
        node[a].push_back(b); node[b].push_back(a);
    }
    queue<int> queue;
    queue.push(1); dist[1] = 0;
    while(!queue.empty()){
        int curr = queue.front();
        depth[dist[curr]]++;
        queue.pop();
        for(int next: node[curr]){
            if(dist[next] <= dist[curr] + 1) continue;
            dist[next] = dist[curr] + 1;
            queue.push(next);
        }
    }
    ll answer = 1;
    loop(i, N + 1){
        if(depth[i] == 0) break;
        answer *= (depth[i] + 1);
        answer %= MOD;
    }
    cout << answer - 1 << endl;
    return 0;
}