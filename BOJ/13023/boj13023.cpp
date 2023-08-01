#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;
vector<int> node[2000];
int depth[2000] = {1, };
bool visited[2000] = {false, }, check = false;
void DFS(int nd){
    if(depth[nd] >= 5){
        check = true;
        return;
    }
    visited[nd] = true;
    for(int n = 0 ; n < node[nd].size() ; n++){
        if(!visited[node[nd][n]]){
            depth[node[nd][n]] = depth[nd] + 1;
            DFS(node[nd][n]);
            visited[node[nd][n]] = false;
            depth[node[nd][n]] = 1;
        }
    }
    depth[nd] = 1;
    visited[nd] = false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, node1, node2;
    for(int n = 0 ; n < 2000 ; n++) depth[n] = 1;
    cin >> N >> M;
    for(int n = 0 ; n < M ; n++){
        cin >> node1 >> node2;
        node[node1].push_back(node2);
        node[node2].push_back(node1);
    }
    for(int n = 0 ; n < N ; n++) if(!check) DFS(n);
    cout << check ? 1 : 0 << endl;
    return 0;
}