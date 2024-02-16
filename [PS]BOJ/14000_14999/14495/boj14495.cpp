#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    unsigned long long size, *arr;
    cin >> size;
    arr = new unsigned long long[size + 1];
    arr[1] = arr[2] = arr[3] = 1;
    for(int n = 4 ; n <= size ; n++) arr[n] = arr[n-1] + arr[n-3];
    cout << arr[size];
    return 0;
}