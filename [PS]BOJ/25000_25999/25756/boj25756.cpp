#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <map>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'

int main() {
    fastio
    cout << fixed;
    cout.precision(6);
    int sz;
    double curr = 0, val;
    cin >> sz;
    while(sz--){
        cin >> val;
        curr = 1 - (1 - curr / 100) * (1 - val / 100);
        curr *= 100;
        cout << curr << endl;
    }
    return 0;
}