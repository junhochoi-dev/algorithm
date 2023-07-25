#include <iostream>
#include <algorithm>
using namespace std;
int arr[10001] = {0, };
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int size, value;
    cin >> size;
    for(int n = 0 ; n < size ; n++){
        cin >> value;
        arr[value]++;
    }
    for(int n = 1 ; n < 10001 ; n++){
        if(arr[n] > 0){
            for(int m = 0 ; m < arr[n] ; m++){
                cout << n << '\n';
            }
        }
    }
    return 0;
}