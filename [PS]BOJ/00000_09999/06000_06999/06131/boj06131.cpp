#include <iostream>
#define endl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num, cnt = 0;
    cin >> num;
    for(int n = 1 ; n <= 500 ; n++) for(int m = 1 ; m <= 500 ; m++){
        if((n + m) * (n - m) == num) cnt++;
    }
    cout << cnt << endl;
    return 0;
}