#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'

int main() {
    fastio
    int a, b, c;
    cin >> a >> b >> c;
    if(a + b == c || b + c == a || c + a == b) cout << 1 << endl;
    else if(a * b == c || b * c == a || c * a == b) cout << 2 << endl;
    else cout << 3 << endl;
    return 0;
}