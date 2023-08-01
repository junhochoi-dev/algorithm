#include <iostream>
using namespace std;
int main() {
    double weight, cost, arr[3], max = 0, idx;
    for(int n = 0 ; n < 3 ; n++){
        cin >> cost >> weight;
        arr[n] = weight * 10;
        if(cost * 10 >= 5000)
            arr[n] /= cost * 10 - 500;
        else
            arr[n] /= cost * 10;
        
        if(max < arr[n]){
            max = arr[n];
            idx = n;
        }
    }
    if(idx == 0) cout << 'S' << endl;
    else if(idx == 1) cout << 'N' << endl;
    else cout << 'U' << endl;
    return 0;
}