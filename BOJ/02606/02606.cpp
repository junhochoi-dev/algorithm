#include <iostream>
#include <vector>
#include <queue>
#define endl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int size, connection, node1, node2, cnt = 0;
    cin >> size >> connection;
    vector<int> node[size + 1];
    bool *visited = new bool[size + 1];
    for(int n = 0 ; n < connection ; n++) {
        cin >> node1 >> node2;
        node[node1].push_back(node2);
        node[node2].push_back(node1);
    }
    queue<int> que;
    que.push(1);
    while(!que.empty()){
        int tmp = que.front();
        visited[tmp] = true;
        for(int n = 0 ; n < node[tmp].size() ; n++){
            if(!visited[node[tmp][n]]){
                que.push(node[tmp][n]);
            }
        }
        que.pop();
    }
    for(int n = 1 ; n < size + 1 ; n++) if(visited[n]) cnt++;
    cout << cnt - 1 << endl;
    return 0;
}