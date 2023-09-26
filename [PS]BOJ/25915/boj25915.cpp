#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <map>
#include <set>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'
#define MOD 10007
int main() {
    fastio
    char ch;
    cin >> ch;
    cout << abs('I' - ch) + 84 << endl;
    return 0;
}