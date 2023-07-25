#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'

int main() {
    fastio
    int sz;
    string a, b;
    cin >> sz;
    while(sz--){
        cin >> a >> b;
        cout << (a == b ? "OK" : "ERROR") << endl;
    }
    return 0;
}