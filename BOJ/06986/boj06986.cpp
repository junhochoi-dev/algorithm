#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed;
    cout.precision(2);
    int N, K, idx_f, idx_e;
    double *arr, sum = 0;
    cin >> N >> K;
    idx_f = K;
    idx_e = N - K - 1;
    arr = new double[N];
    for(int n = 0 ; n < N ; n++){ cin >> arr[n]; }
    sort(arr, arr + N);
    for(int n = idx_f ; n <= idx_e ; n++){ sum += arr[n]; }
    cout << sum / (N - 2 * K) + 0.00000001 << endl;
    sum += K * (arr[idx_f] + arr[idx_e]);
    cout << sum / N + 0.00000001 << endl;
    return 0;
}