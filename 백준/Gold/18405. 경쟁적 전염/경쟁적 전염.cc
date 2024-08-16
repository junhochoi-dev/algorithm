#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

struct Virus {
    int x, y, level;
    Virus(int x, int y, int level) { this->x = x; this->y = y; this->level = level; }
};

struct compare {
    bool operator()(Virus a, Virus b) {
        return a.level > b.level;
    }
};

int main() {
    fastio
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    int N, K; cin >> N >> K;
    int map[200][200];
    priority_queue<Virus, vector<Virus>, compare> virusset;
    queue<Virus> next_queue;
    loop(i, N) loop(j, N) {
        cin >> map[i][j];
        if(map[i][j] == 0) continue;
        virusset.push(Virus(i, j, map[i][j]));
    }
    int S, X, Y; cin >> S >> X >> Y;
    while(S--) {
        while(!virusset.empty()) {
            Virus curr = virusset.top();
            virusset.pop();
            loop(k, 4) {
                int tx = curr.x + dx[k];
                int ty = curr.y + dy[k];
                if(tx < 0 || ty < 0 || tx >= N || ty >= N) continue;
                if(map[tx][ty] != 0) continue;
                map[tx][ty] = map[curr.x][curr.y];
                next_queue.push(Virus(tx, ty, map[tx][ty]));
            }
        }
        while(!next_queue.empty()) {
            virusset.push(next_queue.front());
            next_queue.pop();
        }
    }
    cout << map[X - 1][Y - 1];
    return 0;
}
