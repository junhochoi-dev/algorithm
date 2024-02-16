#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'
int main() {
    fastio
    int arr[3];
    loop(n, 3) cin >> arr[n];
    sort(arr, arr + 3);
    if(!((arr[0] == arr[1] && arr[1] == arr[2]) || arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2])) cout << 0 << endl;
    else if(arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]) cout << 1 << endl;
    else cout << 2 << endl;
    return 0;
}