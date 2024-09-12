#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, M, maximum = 0; cin >> N >> M;
    int dist[20000 + 1];
    vector<vector<int>> graph;
    loop(i, N + 1) {
        graph.push_back(vector<int>());
        dist[i] = INT_MAX;
    }
    loop(i, M) {
        int s, e; cin >> s >> e;
        graph[s].push_back(e);
        graph[e].push_back(s);
    }
    queue<int> queue;
    queue.push(1); dist[1] = 0;
    while(!queue.empty()){
        int curr = queue.front();
        queue.pop();
        for(int next: graph[curr]){
            if(dist[curr] + 1 >= dist[next]) continue;
            dist[next] = dist[curr] + 1;
            maximum = max(maximum, dist[next]);
            queue.push(next);
        }
    }
    int cnt = 0, num = -1;
    loop(i, N + 1){
        if(dist[i] == maximum){
            if(num == -1) num = i;
            cnt++;
        }
    }
    cout << num << " " << maximum << " " << cnt << endl;
    return 0;
}