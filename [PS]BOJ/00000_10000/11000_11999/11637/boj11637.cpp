#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int test_case, size, *arr, *tmp, sum;
    cin >> test_case;
    for(int n = 0 ; n < test_case ; n++){
        cin >> size;
        sum = 0;
        arr = new int[size];
        tmp = new int[size];
        for(int m = 0 ; m < size ; m++){
            cin >> arr[m];
            tmp[m] = arr[m];
            sum += arr[m];
        }
        sort(tmp, tmp + size);
        if(tmp[size - 1] == tmp[size - 2]) cout << "no winner" << endl;
        else{
            for(int m = 0 ; m < size ; m++){
                if(tmp[size - 1] == arr[m]){
                    if( tmp[size - 1] * 2 > sum) cout << "majority winner " << m + 1 << endl;
                    else cout << "minority winner " << m + 1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}