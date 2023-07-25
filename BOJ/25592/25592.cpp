#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
int main() {
    int x, idx = 1;
    bool puang = false;
    cin >> x;
    while(true){
        x -= idx++;
        puang = !puang;
        if(x < 0){
            if(puang) cout << abs(x) << endl;
            else cout << 0 << endl;
            break;
        }
    }
    // 1 3 5 7 9 11 ...
    // 2 4 6 8 10 ...

    return 0;
}