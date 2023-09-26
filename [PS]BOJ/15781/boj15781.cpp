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
    vector<int> helmet, vest;
    int sz_helmet, sz_vest, val;
    cin >> sz_helmet >> sz_vest;
    while(sz_helmet--){
        cin >> val;
        helmet.push_back(val);
    }
    sort(helmet.begin(), helmet.end(), greater<>());
    while(sz_vest--){
        cin >> val;
        vest.push_back(val);
    }
    sort(vest.begin(), vest.end(), greater<>());
    cout << helmet[0] + vest[0] << endl;
    return 0;
}