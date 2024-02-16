#include <iostream>
using namespace std;
int arr[101] = {0, };
int main(){
    int average = 0, value, max = 0;
    for(int n = 0 ; n < 10 ; n++){
        cin >> value;
        arr[value / 10]++;
        average += value;
    }
    for(int n = 1 ; n <= 100 ; n++){
        if(arr[n] > max)
            max = arr[n];
    }
    cout << average / 10 << '\n';
    for(int n = 1 ; n <= 100 ; n++){
        if(arr[n] == max){
            cout << n * 10 << '\n';
            break;
        }
    }
    return 0;
}