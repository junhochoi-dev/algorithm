#include <iostream>
#include <algorithm>
#define endl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int *arr, SIZE;
    cin >> SIZE;
    arr = new int[SIZE];
    for(int n = 0 ; n < SIZE ; n++) cin >> arr[n];
    if(next_permutation(arr, arr + SIZE)) for(int n = 0 ; n < SIZE ; n++) cout << arr[n] << ' ';
    else cout << -1;
    return 0;
}