#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

#define SIZE 401

int main() {
    fastio
    int V, E; cin >> V >> E;
    int dist[SIZE][SIZE];
    for(int i = 1; i <= V; i++) for(int j = 1; j <= V; j++) dist[i][j] = INT_MAX;
    while(E--) {
        int a, b, c; cin >> a >> b >> c;
        dist[a][b] = c;
    }
    for(int k = 1; k <= V; k++) for(int i = 1; i <= V; i++) for(int j = 1; j <= V; j++){
        if(dist[i][k] == INT_MAX || dist[k][j] == INT_MAX) continue;
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
    }
    int answer = INT_MAX;
    for(int i = 1; i <= V; i++) for(int j = 1; j <= V; j++) {
        if(dist[i][j] == INT_MAX || dist[j][i] == INT_MAX) continue;
        answer = min(answer, dist[i][j] + dist[j][i]);
    }
    cout << (answer == INT_MAX ? -1 : answer);
    return 0;
}