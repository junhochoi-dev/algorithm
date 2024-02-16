#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    vector<int> num, oper;
    int size, number, op[4];
    long long max = -1000000001, min = 1000000001, sum;
    cin >> size;
    for(int n = 0 ; n < size ; n++){
        cin >> number;
        num.push_back(number);
    }
    // 0 = +, 1 = -, 2 = *, 3 = /
    for(int n = 0 ; n < 4 ; n++){
        cin >> op[n];
        switch(n){
            case 0:{
                for(int m = 0 ; m < op[n] ; m++) oper.push_back(0);
                break;
            }
            case 1:{
                for(int m = 0 ; m < op[n] ; m++) oper.push_back(1);
                break;
            }
            case 2:{
                for(int m = 0 ; m < op[n] ; m++) oper.push_back(2);
                break;
            }
            case 3:{
                for(int m = 0 ; m < op[n] ; m++) oper.push_back(3);
                break;
            }
        }
    }
    do{
        sum = num[0];
        for(int n = 1 ; n < size ; n++){
            switch(oper[n - 1]){
                case 0:{
                    sum += num[n];
                    break;
                }
                case 1:{
                    sum -= num[n];
                    break;
                }
                case 2:{
                    sum *= num[n];
                    break;
                }
                case 3:{
                    sum /= num[n];
                    break;
                }
            }
        }
        if(max < sum) max = sum;
        if(min > sum) min = sum;
    }while(next_permutation(oper.begin(), oper.end()));
    cout << max << endl << min << endl;
    return 0;
}