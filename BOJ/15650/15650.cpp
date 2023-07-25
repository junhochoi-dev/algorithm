#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'
using namespace std;
vector<int> vt;
bool visited[100];
int N, M;
void DFS(int idx, int num){
    if(num == M){
        for(int n = 0 ; n < vt.size() ; n++){
            cout << vt[n] << ' ';
        }
        cout << endl;
        return;
    }
    
    for(int n = 1 ; n <= N ; n++){
        if(idx > n) continue;
        if(visited[n] == true) continue;
        visited[n] = true;
        vt.push_back(n);
        DFS(n, num + 1);
        vt.pop_back();
        visited[n] = false;
    }
}
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> N >> M;
    DFS(0, 0);
    return 0;
}