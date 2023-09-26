#include <iostream>
using namespace std;
int main() {
    int student, firecracker, *arr, sum = 0;
    cin >> student >> firecracker;
    arr = new int[student];
    bool *time = new bool[firecracker + 1];
    for(int n = 0 ; n < student ; n++){
        cin >> arr[n];
        time[n] = false;
    }
    for(int n = 0 ; n < student ; n++){
        for(int m = 1 ; m <= firecracker ; m++){
            if(m % arr[n] == 0)
                time[m] = true;
        }
    }
    for(int n = 0 ; n <= firecracker ; n++){
        if(time[n])
            sum++;
    }
    cout << sum << endl;
    return 0;
}