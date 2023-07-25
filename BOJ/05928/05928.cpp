#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'


int main() {
    fastio
    int d, h, m;
    cin >> d >> h >> m;
    int res = (d - 11) * 24 * 60 + (h - 11) * 60 + m - 11;
    cout << (res < 0 ? -1 : res) << endl;
    return 0;
}