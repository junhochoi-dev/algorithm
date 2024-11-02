#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    ll L; int N, K; cin >> L >> N >> K;
    ll dx[] = {1, -1};
    queue<pair<ll, ll>> queue;
    set<ll> visited;
    loop(i, N) {
        ll streetlamp; cin >> streetlamp;
        queue.push(make_pair(streetlamp, 0));
        visited.insert(streetlamp);
    }
    while(!queue.empty()){
        ll curr = queue.front().first;
        ll dist = queue.front().second;
        queue.pop();
        cout << dist << endl; K--;
        if(K == 0) return 0;
        loop(k, 2){
            ll next = curr + dx[k];
            if(next < 0 || L < next) continue;
            if(visited.find(next) != visited.end()) continue;
            visited.insert(next); queue.push(make_pair(next, dist + 1));
        }
    }
    return 0;
}

