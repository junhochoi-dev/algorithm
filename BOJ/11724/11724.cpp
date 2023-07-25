#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
#define MAX 1001
vector<int> vt[MAX];
bool visited[MAX] = {false, };

void BFS(int node){
    queue<int> que;
    visited[node] = true;
    que.push(node);
    while(!que.empty()){
        int now = que.front();
        que.pop();
        for(int n = 0 ; n < vt[now].size() ; n++){
            int next = vt[now][n];
            if(!visited[next]){
                visited[next] = true;
                que.push(next);
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int node_cnt, size, node1, node2, group = 0;
    cin >> node_cnt >> size;
    
    for(int n = 0 ; n < size ; n++){ // input node connection
        cin >> node1 >> node2;
        vt[node1].push_back(node2);
        vt[node2].push_back(node1);
    }
    
    for(int n = 1 ; n <= node_cnt ; n++){ // cycle all node
        if(!visited[n]){
            BFS(n);
            group++;
        }
    }
    cout << group << endl;
    return 0;
}