#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'

#define SIZE 50001
#define INF 987654321
int N, M;
vector<pair<int, int>> edges[SIZE];
int dist[SIZE];

void dijkstra(){
    loop(n, N) dist[n+1] = INF;
    queue<int> que;
    que.push(1);
    dist[1] = 0;
    while(!que.empty()){
        int curr = que.front();
        que.pop();
        sort(edges[curr].begin(), edges[curr].end());
        loop(n, edges[curr].size()){
            int next = edges[curr][n].second;
            int weight = edges[curr][n].first;
            if(dist[next] > dist[curr] + weight){
                dist[next] = dist[curr] + weight;
                que.push(next);
            }
        }
    }
}

int main() {
    fastio
    cin >> N >> M;
    int s, e, w;
    loop(n, M) {
        cin >> s >> e >> w;
        edges[s].push_back({w, e});
        edges[e].push_back({w, s});
    }
    dijkstra();
    cout << dist[N] << endl;
    return 0;
}
