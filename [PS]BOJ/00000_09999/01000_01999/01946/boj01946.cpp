#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    int tc, sz, docu, interv;
    cin >> tc;
    while(tc--){
        cin >> sz;
        vector<pair<int, int>> vc;
        while(sz--){
            cin >> docu >> interv;
            vc.push_back({docu, interv});
        }
        sort(vc.begin(), vc.end());
        int cnt = 0, _std = vc[0].second;
        for(int n = 1 ; n < vc.size() ; n++){
            if(_std >= vc[n].second){
                _std = vc[n].second;
                cnt++;
            }
        }
        cout << cnt + 1 << endl;
    }
    return 0;
}