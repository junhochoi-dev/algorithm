#include <iostream>
#define endl '\n'
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    long long row, column;
    cin >> row >> column;
    if(row < column){
        cout << (row - 1) * 2 << endl;
        if(row % 2 == 0) cout << row / 2 + 1 << ' ' << row / 2;
        else cout << (row + 1) / 2 << ' ' << (row - 1) / 2 + 1 + column - row;
    }
    else if(row > column) {
        cout << column * 2 - 1 << endl;
        if(column % 2 == 0) cout << column / 2 + 1 << ' ' << column / 2;
        else cout << (column - 1) / 2 + 1 + row - column << ' ' << (column + 1) / 2;
    }
    else{
        cout << (row - 1) * 2 << endl;
        if(row % 2 == 0) cout << row / 2 + 1 << ' ' << row / 2;
        else cout << (row + 1) / 2 << ' ' << (row + 1) / 2;
    }
    return 0;
}