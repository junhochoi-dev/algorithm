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
    int sz, w, k;
    cin >> sz;
    while(sz--){
        cin >> w >> k;
        cout << w * k / 2 << endl;
    }
    return 0;
}