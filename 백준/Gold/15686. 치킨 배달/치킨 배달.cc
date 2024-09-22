#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    vector<bool> selected;
    vector<pair<int, int>> house, chicken;
    int N, M, answer = INT_MAX; cin >> N >> M;
    loop(i, N) loop(j, N){
        int v; cin >> v;
        if(v == 1) house.push_back(make_pair(i, j));
        if(v == 2) chicken.push_back(make_pair(i, j));
    }
    loop(i, chicken.size() - M) selected.push_back(false);
    loop(i, M) selected.push_back(true);
    do{
        int distance = 0;
        loop(i, house.size()){
            int hx = house[i].first;
            int hy = house[i].second;
            int minimum = INT_MAX;
            loop(j, chicken.size()){
                int cx = chicken[j].first;
                int cy = chicken[j].second;
                if(!selected[j]) continue;
                minimum = min(minimum, abs(hx - cx) + abs(hy - cy));
            }
            distance += minimum;
        }
        answer = min(answer, distance);
    }while(next_permutation(selected.begin(), selected.end()));
    cout << answer << endl;
    return 0;
}