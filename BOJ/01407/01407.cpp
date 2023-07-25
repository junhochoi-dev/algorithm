#include <iostream>
#include <cmath>
using namespace std;
long long func(long long x) {
    long long sum = 0, n = 0;
    while (x != 0) {
        if (x % 2 == 1) sum += (x / 2 + 1) * (long long)pow(2, n);
        else sum += x / 2 * (long long)pow(2, n);
        x /= 2; n++;
    }
    return sum;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long A, B;
    cin >> A >> B;
    if (A == B) cout << func(A) - func(A - 1);
    else cout << func(B) - func(A - 1);
    return 0;
}