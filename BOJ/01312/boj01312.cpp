#include <iostream>
#include <algorithm>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'

int main() {
    fastio
    int A, B, N;
    cin >> A >> B >> N;
    loop(n, N){
        A %= B;
        A *= 10;
    }
    cout << A / B << endl;
    return 0;
}