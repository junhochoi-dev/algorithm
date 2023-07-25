#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;
int node_leaf = 0, root;
bool visited[50];
vector<int> node[50];
void BFS(int start, int del){
    if(del == start)
        return;
    int cnt = 0;
    visited[start] = true;
    for(int n = 0 ; n < node[start].size() ; n++){
        if(!visited[node[start][n]] && del != node[start][n]){
            BFS(node[start][n], del);
            cnt++;
        }
    }
    if(cnt == 0)
        node_leaf++;
}
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int size, head, node_del;
    for(int n = 0 ; n < 50 ; n++) visited[n] = false;
    cin >> size;
    for(int n = 0 ; n < size ; n++){
        cin >> head;
        if(head == -1) root = n;
        else{
            node[n].push_back(head);
            node[head].push_back(n);
        }
    }
    cin >> node_del;
    BFS(root, node_del);
    cout << node_leaf << endl;
    return 0;
}