#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    int sz, val, repeat = 0, maxRepeat = 0;
    vector<int> vc;
    cin >> sz;
    for(int n = 0 ; n < sz ; n++){
        cin >> val;
        vc.push_back(val);
    }
    sort(vc.begin(), vc.end());
    for(int n = 1 ; n < sz ; n++){
        if(vc[n - 1] == vc[n]) {
            repeat++;
            maxRepeat = max(maxRepeat, repeat);
        }
        else{
            maxRepeat = max(maxRepeat, repeat);
            repeat = 0;
        }
    }
    cout << maxRepeat + 1 << endl;
    return 0;
}