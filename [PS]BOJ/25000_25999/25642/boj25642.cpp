#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    int yt, yj, idx = 0;
    cin >> yt >> yj;
    while(yt < 5 && yj < 5){
        if(idx % 2 == 0) yj += yt;
        else yt += yj;
        idx++;
    }
    cout << (yt > yj ? "yj" : "yt") << endl;
    return 0;
}