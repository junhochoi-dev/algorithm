#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, M; cin >> N >> M;
    bool bridge[500][500];
    while(M--){
        int a, b; cin >> a >> b; a--; b--;
        bridge[a][b] = true; bridge[b][a] = true;
    }
    int Q; cin >> Q;
    while(Q--){
        int k, a, b; cin >> k >> a >> b; a--; b--;
        bridge[a][b] = !bridge[a][b]; bridge[b][a] = !bridge[b][a];
        int dist[500]; fill(dist, dist + N, INT_MAX);
        queue<int> queue;
        queue.push(0); dist[0] = 0;
        while(!queue.empty()){
            int curr = queue.front();
            queue.pop();
            loop(next, N){
                if(dist[next] <= dist[curr] + 1) continue;
                if(!bridge[curr][next]) continue;
                dist[next] = dist[curr] + 1;
                queue.push(next);
            }
        }
        loop(n, N) cout << (dist[n] == INT_MAX ? -1 : dist[n]) << " ";
        cout << endl;
    }
    return 0;
}
