#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int R, C, answer = 0;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
char arr[1500][1500];
bool visited[1500][1500];
vector<pair<int, int>> swans;
queue<pair<int, int>> queue_melt;
queue<pair<int, int>> *queue_swan_curr;
queue<pair<int, int>> *queue_swan_next;

bool meet(){
    queue_swan_next = new queue<pair<int, int>>;
    while(!queue_swan_curr->empty()){
        int x = queue_swan_curr->front().first;
        int y = queue_swan_curr->front().second;
        queue_swan_curr->pop();
        loop(k, 4){
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
            if(visited[nx][ny]) continue;
            visited[nx][ny] = true;
            if(nx == swans[1].first && ny == swans[1].second) return true;
            if(arr[nx][ny] == 'X') queue_swan_next->push(make_pair(nx, ny));
            else queue_swan_curr->push(make_pair(nx, ny));
        }
    }
    queue_swan_curr = queue_swan_next;
    return false;
}

void melt(){
    int count_melt = queue_melt.size();
    while(count_melt--){
        int x = queue_melt.front().first;
        int y = queue_melt.front().second;
        queue_melt.pop();
        loop(k, 4){
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
            if(arr[nx][ny] == 'X'){
                arr[nx][ny] = '.';
                queue_melt.push(make_pair(nx, ny));
            }
        }
    }
    answer++;
}

int main() {
    fastio
    cin >> R >> C;
    loop(i, R) loop(j, C) {
            char ch; cin >> ch;
            arr[i][j] = ch; visited[i][j] = false;
            if(ch == 'L') {
                swans.push_back(make_pair(i, j));
                arr[i][j] = '.';
            }
            if(arr[i][j] == '.') queue_melt.push(make_pair(i, j));
        }
    queue_swan_curr = new queue<pair<int, int>>;
    queue_swan_curr->push(make_pair(swans[0].first, swans[0].second));
    visited[swans[0].first][swans[0].second] = true;
    while(!meet()) melt();
    cout << answer << endl;
    return 0;
}