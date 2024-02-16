#include <iostream>
#define endl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int arr[101];
    arr[1] = arr[2] = arr[3] = 1;
    for(int n = 4 ; n <= 100 ; n++) arr[n] = arr[n - 2] + arr[n - 3];
    int size, N;
    cin >> size;
    for(int n = 0 ; n < size ; n++) {
        cin >> N;
        cout << arr[N] << endl;
    }
    return 0;
}