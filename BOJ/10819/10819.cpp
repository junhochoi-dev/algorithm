#include <iostream>
#include <algorithm>
#include <cmath>
#define endl '\n'
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int N, *arr, tmp, max_value = 0;
    cin >> N;
    arr = new int[N];
    for(int n = 0 ; n < N ; n++) cin >> arr[n];
    sort(arr, arr + N);
    do{
        tmp = 0;
        for(int n = 0 ; n < N - 1 ; n++){
            tmp += abs(arr[n] - arr[n + 1]);
        }
        max_value = max(max_value, tmp);
    }while(next_permutation(arr, arr +N));
    cout << max_value;
    return 0;
}