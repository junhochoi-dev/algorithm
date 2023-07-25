#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int size, arr[10];
    cin >> size;
    for(int n = 0 ; n < size ; n++){
        for(int m = 0 ; m < 10 ; m++){
            cin >> arr[m];
        }
        sort(arr, arr + 10);
        cout << arr[7] << endl;
    }
    return 0;
}