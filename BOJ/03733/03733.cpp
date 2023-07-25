#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    int N, x;
    while(cin >> N >> x){
        cout << x / (N + 1) << endl;
    }
    return 0;
}