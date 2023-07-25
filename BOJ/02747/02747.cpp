#include <iostream>
#define endl '\n'
using namespace std;
long long arr[46] = {0, 1, 1, };
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int size;
    for(int n = 2 ; n <= 45 ; n++) arr[n] = arr[n - 1] + arr[n - 2];
    cin >> size;
    cout << arr[size];
    return 0;
}