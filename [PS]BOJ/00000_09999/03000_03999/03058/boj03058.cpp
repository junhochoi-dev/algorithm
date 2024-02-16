#include <iostream>
#define endl '\n'
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int size, min, value, sum;
    cin >> size;
    for(int n = 0 ; n < size ; n++){
        sum = 0;
        min = 101;
        for(int m = 0 ; m < 7 ; m++){
            cin >> value;
            if(value % 2 == 0){
                sum += value;
                if(min > value) min = value;
            }
        }
        cout << sum << ' ' << min << endl;
    }
    return 0;
}