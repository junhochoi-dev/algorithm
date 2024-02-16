#include <iostream>
using namespace std;
int main(){
    int size, costume, *arr, cnt = 0;
    cin >> size >> costume;
    arr = new int[size];
    for(int n = 0 ; n < size ; n++){
        cin >> arr[n];
    }
    for(int n = 0 ; n < size - 1 ; n++){
        for(int m = n + 1 ; m < size ; m++){
            if(arr[n] + arr[m] <= costume)
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}