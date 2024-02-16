#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'

#define SIZE 801
#define INF 987654321987654321
int N, M;
vector<pair<ll, ll>> edges[SIZE];


ll dijkstra(int start, int end){
    ll dist[SIZE];
    loop(n, N) dist[n+1] = INF;
    queue<ll> que;
    que.push(start);
    dist[start] = 0;
    while(!que.empty()){
        ll curr = que.front();
        que.pop();
        sort(edges[curr].begin(), edges[curr].end());
        loop(n, edges[curr].size()){
            ll next = edges[curr][n].second;
            ll weight = edges[curr][n].first;
            if(dist[next] > dist[curr] + weight){
                dist[next] = dist[curr] + weight;
                que.push(next);
            }
        }
    }
    return dist[end];
}

int main() {
    fastio
    cin >> N >> M;
    int s, e, w, v1, v2;
    loop(n, M) {
        cin >> s >> e >> w;
        edges[s].push_back({w, e});
        edges[e].push_back({w, s});
    }
    cin >> v1 >> v2;
    ll t1 = dijkstra(1, v1) + dijkstra(v1, v2) + dijkstra(v2, N);
    ll t2 = dijkstra(1, v2) + dijkstra(v2, v1) + dijkstra(v1, N);
    if(t1 >= INF && t2 >= INF) cout << -1 << endl;
    else cout << min(t1, t2) << endl;
    return 0;
}
