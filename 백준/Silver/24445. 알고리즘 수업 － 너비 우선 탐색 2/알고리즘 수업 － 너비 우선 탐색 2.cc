#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

vector<int> edge[100000 + 1];
int order[100000 + 1];
int main() {
    fastio
    int N, M, R, check = 1; cin >> N >> M >> R;
    loop(i, N) order[i + 1] = 0; order[R] = check++;
    while(M--){
        int s, e; cin >> s >> e;
        edge[s].push_back(e);
        edge[e].push_back(s);
    }
    loop(i, N) sort(edge[i + 1].begin(), edge[i + 1].end(), greater<int>());
    queue<int> queue; queue.push(R);
    while(!queue.empty()){
        int curr = queue.front();
        queue.pop();
        for(int next: edge[curr]){
            if(order[next] != 0) continue;
            order[next] = check++;
            queue.push(next);
        }
    }
    loop(i, N) cout << order[i + 1] << endl;
    return 0;
}