#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    int bread, patty;
    cin >> bread >> patty;
    bread /= 2;
    cout << min(bread, patty) << endl;
    return 0;
}