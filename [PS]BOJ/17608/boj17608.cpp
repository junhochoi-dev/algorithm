#include <iostream>
using namespace std;
int main() {
    int bar, *arr, cnt = 1, idx;
    cin >> bar;
    arr = new int[bar];
    for(int n = 0 ; n < bar ; n++){
        cin >> arr[n];
    }
    idx = arr[bar - 1];
    for(int n = bar - 2 ; n >= 0 ; n--){
        if(idx < arr[n]){
            cnt++;
            idx = arr[n];
        }
    }
    cout << cnt << endl;
    return 0;
}