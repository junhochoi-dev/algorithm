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
    int arr[3];
    loop(n, 3) cin >> arr[n];
    cout << "The 1-3-sum is " << 91 + arr[0] + arr[1] * 3 + arr[2] << endl;
    return 0;
}