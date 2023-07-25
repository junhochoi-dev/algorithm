#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num, n = 0, sum = 0;
    cin >> num;
    while(true){
        if(num < pow(2, n)){
            n--;
            break;
        }
        n++;
    }
    for(int m = n ; m >= 0 ; m--){
        sum += (num % 2) * pow(2, m);
        num /= 2;
    }
    cout << sum << endl;
    return 0;
}