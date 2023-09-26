#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>
#include <cmath>
#include <queue>
#include <map>
#include <set>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'

int main() {
    fastio
    int sz;
    cin >> sz;
    vector<pair<int, int>> vec;
    while(sz--){
        int x, l;
        cin >> x >> l;
        vec.push_back({x, l});
    }
    sort(vec.begin(), vec.end());
    int sum = 0, cnt = 0;
    loop(n, vec.size()){
        if(sum < vec[n].first) cnt++;
        sum = vec[n].first + vec[n].second;
    }
    cout << cnt << endl;
    return 0;
}