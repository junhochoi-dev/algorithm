#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;
int start, vertex, edge;
bool visited[1001], node[1001];
vector<int> vt[1001];
void DFS(int v){
    visited[v] = true;
    if(vt[v].size() != 0)
        cout << v << ' ';
    if(v == start && vt[v].size() == 0)
        cout << v << ' ';
    for(int n = 0 ; n < vt[v].size() ; n++){
        if(!node[vt[v][n]])
                continue;
        if(!visited[vt[v][n]])
            DFS(vt[v][n]);
    }
}
void BFS(int v){
    queue<int> que;
    que.push(v);
    visited[v] = true;
    if(vt[v].size() != 0)
        cout << v << ' ';
    if(v == start && vt[v].size() == 0)
        cout << v << ' ';
    while(!que.empty()){
        int tmp = que.front();
        que.pop();
        for(int n = 0; n < vt[tmp].size() ; n++){
            if(!node[vt[tmp][n]])
                continue;
            if(!visited[vt[tmp][n]] ){
                que.push(vt[tmp][n]);
                visited[vt[tmp][n]] = true;
                cout << vt[tmp][n] << ' ';
            }
        }
    }
}
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int node1, node2;
    cin >> vertex >> edge >> start;
    for(int n = 1 ; n <= 1000 ; n++) node[n] = false;
    for(int n = 0 ; n < edge ; n++){
        cin >> node1 >> node2;
        vt[node1].push_back(node2);
        vt[node2].push_back(node1);
        node[node1] = true;
        node[node2] = true;
    }
    for(int n = 1 ; n <= vertex ; n++) { sort(vt[n].begin(), vt[n].end()); }
    
    for(int n = 1 ; n <= vertex ; n++) visited[n] = false;
    // DFS
    DFS(start);
    
    cout << endl;
    for(int n = 1 ; n <= vertex ; n++) visited[n] = false;
    //BFS
    BFS(start);
    return 0;
}