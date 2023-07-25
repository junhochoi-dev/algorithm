#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    vector<int> vt;
    int value, cnt, order;
    cin >> cnt >> order;
    for(int n = 0 ; n < cnt ; n++){
        cin >> value;
        vt.push_back(value);
    }
    sort(vt.begin(), vt.end());
    cout << vt[order - 1] << endl;
    return 0;
}