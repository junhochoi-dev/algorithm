#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, stone, start, answer = 1;
    int stones[100000];
    bool visited[100000];
    cin >> N;
    loop(i, N) {
        cin >> stones[i];
        visited[i] = false;
    }
    cin >> start;
    queue<int> que;
    que.push(--start);
    visited[start] = true;
    while(!que.empty()){
        int curr = que.front();
        que.pop();
        if(curr + stones[curr] < N && !visited[curr + stones[curr]]){
            que.push(curr + stones[curr]);
            visited[curr + stones[curr]] = true;
            answer++;
        }
        if(0 <= curr - stones[curr] && !visited[curr - stones[curr]]){
            que.push(curr - stones[curr]);
            visited[curr - stones[curr]] = true;
            answer++;
        }
    }
    cout << answer << endl;

    return 0;
}
