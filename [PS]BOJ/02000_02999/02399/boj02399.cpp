#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <map>
#include <set>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'
int main() {
    fastio
    int sz;
    cin >> sz;
    int* arr = new int[sz];
    long long sum = 0;
    loop(n, sz) cin >> arr[n];
    for(int n = 0 ; n < sz ; n++) for(int m = n + 1 ; m < sz ; m++) sum += abs(arr[n] - arr[m]) * 2;
    cout << sum << endl;
    return 0;
}