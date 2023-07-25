#include <iostream>
#include <vector>
#include <queue>
#define endl '\n'
#define MAX 101
using namespace std;
int depth[MAX] = {0, };
bool visited[MAX];
vector<int> connection[MAX];
void BFS(int start){
    queue<int> que;
    que.push(start);
    visited[start] = true;
    while(!que.empty()){
        int standard = que.front();
        que.pop();
        for(int n = 0 ; n < connection[standard].size() ; n++){
            int tmp = connection[standard][n];
            if(!visited[tmp]){
                visited[tmp] = true;
                que.push(tmp);
                depth[tmp] = depth[standard] + 1;
            }
        }
    }
}
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int person, start, end, cnt, node1, node2;
    cin >> person >> start >> end >> cnt;
    for(int n = 0 ; n < cnt ; n++){
        cin >> node1 >> node2;
        connection[node1].push_back(node2);
        connection[node2].push_back(node1);
    }
    BFS(start);
    cout << (depth[end] == 0 ? -1 : depth[end]) << endl;
    return 0;
}