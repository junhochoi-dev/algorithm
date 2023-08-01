#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    int tc, val;
    vector<int> odd, even;
    cin >> tc;
    while(tc--){
        cin >> val;
        val % 2 == 0 ? even.push_back(val) : odd.push_back(val);
    }
    int ans = odd.size() - even.size();
    cout << (ans == 0 || ans == 1) ? 1 : 0 << endl;
    return 0;
}