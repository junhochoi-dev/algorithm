#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int sz, val, maxWeight;
    cin >> sz;
    vector<int> vt;
    for(int n = 0 ; n < sz ; n++){
        cin >> val;
        vt.push_back(val);
    }
    sort(vt.begin(), vt.end());
    reverse(vt.begin(), vt.end());
    maxWeight = vt[0];
    for(int n = 2 ; n <= sz ; n++) maxWeight = max(maxWeight, n * vt[n - 1]);
    cout << maxWeight << endl;
	return 0;
}