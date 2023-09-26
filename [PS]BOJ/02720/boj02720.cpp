#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    int sz, price;
    cin >> sz;
    while(sz--){
        cin >> price;
        cout << price / 25 << ' ';
        price %= 25;
        cout << price / 10 << ' ';
        price %= 10;
        cout << price / 5 << ' ';
        price %= 5;
        cout << price / 1 << ' ';
        price %= 1;
        cout << endl;
    }
    return 0;
}
// Ctrl + Alt + N with input.txt

// Ctrl + Alt + C -> compile
// Ctrl + Alt + R -> execute