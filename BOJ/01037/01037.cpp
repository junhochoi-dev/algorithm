#include <iostream>
#include <algorithm>
#define endl '\n'
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int cnt, *arr;
    cin >> cnt;
    arr = new int[cnt];
    for(int n = 0 ; n < cnt ; n++) cin >> arr[n];
    sort(arr, arr + cnt);
    cout << arr[0] * arr[cnt - 1] << endl;
    return 0;
}