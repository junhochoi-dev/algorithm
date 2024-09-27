#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, M; cin >> N >> M;
    vector<int> edge[2000 + 1];
    bool bombsite[2000 + 1];
    while(M--){
        int s, e; cin >> s >> e;
        edge[s].push_back(e);
        edge[e].push_back(s);
    }
    vector<int> bomblist;
    set<int> realbomb;
    int T; cin >> T;
    loop(i, T){
        int site; cin >> site;
        bombsite[site] = true;
        bomblist.push_back(site);
    }
    string answer = "";
    int cnt = 0;
    for(int bomb: bomblist){
        bool launch = true;
        for(int adjacent: edge[bomb]){
            if(!bombsite[adjacent]){
                launch = false;
                break;
            }
        }
        if(launch) {
            answer += to_string(bomb) + " "; cnt++;
            realbomb.insert(bomb);
            for(int adjacent: edge[bomb]) realbomb.insert(adjacent);
        }
    }
    if(T == realbomb.size()){
        cout << cnt << endl;
        cout << answer << endl;
    } else cout << -1 << endl;
    return 0;
}