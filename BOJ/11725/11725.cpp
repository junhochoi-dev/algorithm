#include <iostream>
#include <vector>
#include <queue>
#define endl '\n'
using namespace std;
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int node_cnt, node1, node2;
    cin >> node_cnt;
    bool *visited = new bool[node_cnt + 1];
    int *parent = new int[node_cnt + 1];
    vector<int> vt[node_cnt + 1];
    queue<int> que;
    for(int n = 1 ; n <= node_cnt ; n++){
        cin >> node1 >> node2;
        vt[node1].push_back(node2);
        vt[node2].push_back(node1);
        visited[n] = false;
        parent[n] = 0;
    }
    que.push(1);
    while(!que.empty()){
        int par = que.front();
        visited[par] = true;
        for(int n = 0 ; n < vt[par].size() ; n++){
            if(!visited[vt[par][n]]){
                que.push(vt[par][n]);
                parent[vt[par][n]] = par;
            }
        }
        que.pop();
    }
    for(int n = 2 ; n <= node_cnt ; n++){
        cout << parent[n] << endl;
    }
    return 0;
}