#include <iostream>
#include <algorithm>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'

int main() {
    fastio
    int sz, a, b;
    cin >> sz;
    loop(n, sz){
        cin >> a >> b;
        cout << a + b << endl;
    }
    return 0;
}