#include <iostream>
#include <algorithm>
#include <cmath>
#define endl '\n'
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int N, tmp, max_value = 0;
    cin >> N;
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    do{
        for(int n = 0 ; n < N ; n++) cout << arr[n] << ' ';
        cout << endl;
    }while(next_permutation(arr, arr + N));
    return 0;
}