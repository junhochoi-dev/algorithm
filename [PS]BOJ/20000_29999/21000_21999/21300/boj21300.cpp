#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    int cnt, sum = 0, sz = 6;
    while(sz--){
        cin >> cnt;
        sum += cnt;
    }
    cout << sum * 5 << endl;
    return 0;
}