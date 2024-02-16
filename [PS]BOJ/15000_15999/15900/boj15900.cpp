#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

#define endl '\n'
#define INF 987654321
#define MAXSIZE 500001

using namespace std;

vector<int> vt[MAXSIZE];
int depth[MAXSIZE], N;
bool visited[MAXSIZE];

void BFS(int start){
    for(int n = 1 ; n <= N ; n++){
        depth[n] = 0;
        visited[n] = false;
    }

    queue<int> que;
    que.push(start);
    visited[start] = true;
    while(!que.empty()){
        bool haveChildren = false;
        int curr = que.front();
        que.pop();
        for(int n = 0 ; n < vt[curr].size() ; n++){
            int next = vt[curr][n];
            if(visited[next]) continue;
            haveChildren = visited[next] = true;
            depth[next] = depth[curr] + 1;
            que.push(next);
        }
        if(haveChildren) depth[curr] = -1;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("input.txt", "r", stdin);

    int sz, from, to; 
    cin >> N;

    for(int n = 0 ; n < N ; n++){
        cin >> from >> to;
        vt[from].push_back(to);
        vt[to].push_back(from);
    }

    BFS(1);

    int depthSum = 0;
    for(int n = 1 ; n <= N ; n++) if(depth[n] != -1) depthSum += depth[n];

    if(depthSum % 2 == 0) cout << "No" << endl;
    else cout << "Yes" << endl;
    
    return 0;
}
// Ctrl + Alt + N with input.txt

// Ctrl + Alt + C -> compile
// Ctrl + Alt + R -> execute

