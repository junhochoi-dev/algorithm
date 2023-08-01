#include <iostream>
#include <algorithm>
#include <cmath>
#include <functional>
using namespace std;
int main() {
    int size, K, sum = 0;
    cin >> size >> K;
    int *arr = new int[size];
    int *gap = new int[size];
    for(int n = 0 ; n < size ; n++) cin >> arr[n];
    if(K >= size){
        cout << 0 << endl;
    }
    else{
        sort(arr, arr + size);
        for(int n = 0 ; n < size - 1 ; n++){
            gap[n] = abs(arr[n] - arr[n + 1]);
            sum += gap[n];
        }
        sort(gap, gap + size - 1, greater<>());
        for(int n = 0 ; n < K - 1 ; n++){
            sum -= gap[n];
        }
        cout << sum << endl;
    }
    return 0;
} 