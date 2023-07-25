#include <iostream>
#include <algorithm>
#define endl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, arr[1000001] = {0, };
    cin >> N;
    arr[1] = 0;
    for(int n = 2 ; n <= N ; n++){
        arr[n] = arr[n - 1] + 1;
        if(n % 2 == 0) arr[n] = min(arr[n / 2] + 1, arr[n]); 
        if(n % 3 == 0) arr[n] = min(arr[n / 3] + 1, arr[n]);
    }
    cout << arr[N] << endl;
    return 0;
}