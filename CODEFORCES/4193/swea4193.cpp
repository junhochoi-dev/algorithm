#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <climits>
#include <algorithm>
using namespace std;
#define ll long long
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);
#define loop(k, sz) for (int k = 0; k < sz; k++)
#define endl '\n'
#define INF INT_MAX

int N;
int sx, sy, ex, ey;
int arr[15][15];
int dist[15][15];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void init()
{
    loop(n, 15) loop(m, 15) dist[n][m] = INF;
}

void BFS()
{
    queue<tuple<int, int, int>> que;
    que.push(make_tuple(sx, sy, 0));
    dist[sx][sy] = 0;
    while (!que.empty())
    {
        int x = get<0>(que.front());
        int y = get<1>(que.front());
        int time = get<2>(que.front());
        que.pop();
        loop(k, 4)
        {
            int tx = x + dx[k];
            int ty = y + dy[k];
            int nexttime = time;
            if (tx < 0 || tx >= N || ty < 0 || ty >= N)
                continue;
            if (arr[tx][ty] == 1)
                continue;
            if (arr[tx][ty] == 2)
            {
                if (time % 3 == 0)
                    nexttime += 3;
                if (time % 3 == 1)
                    nexttime += 2;
                if (time % 3 == 2)
                    nexttime += 1;
            }
            else
                nexttime += 1;
            if (dist[tx][ty] > nexttime)
            {
                dist[tx][ty] = nexttime;
                que.push(make_tuple(tx, ty, nexttime));
            }
        }
    }
}

int main()
{
    fastio int testcase;
    cin >> testcase;
    loop(t, testcase)
    {
        init();
        cin >> N;
        loop(n, N) loop(m, N) cin >> arr[n][m];
        cin >> sx >> sy;
        cin >> ex >> ey;
        BFS();
        cout << '#' << t + 1 << ' ' << ((dist[ex][ey] == INF) ? -1 : dist[ex][ey]) << endl;
    }
    return 0;
}