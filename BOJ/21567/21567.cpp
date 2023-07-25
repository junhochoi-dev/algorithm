#include <iostream>
using namespace std;
int main() {
    unsigned long long A, B, C, sum;
    int num[10] = { 0, };
    cin >> A >> B >> C;
    sum = A * B * C;
    while(true){
        if(sum == 0) break;
        num[sum % 10]++;
        sum /= 10;
    }
    for(int n = 0 ; n < 10 ; n++) cout << num[n] << endl;
    return 0;
}