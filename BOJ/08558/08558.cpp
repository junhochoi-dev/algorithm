#include <iostream>
#include <algorithm>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'

int main() {
    fastio
    int N, sum = 1;
    cin >> N;
    loop(n, N){
        sum *= (n + 1);
        sum %= 10;
    }
    cout << sum << endl;
    return 0;
}