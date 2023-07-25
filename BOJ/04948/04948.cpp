#include <iostream>
using namespace std;
bool isPrime[246913];
bool primeCheck(int x){
    for(int n = 2; n * n <= x; n++){
        if(x % n == 0) return false;
    }
    return true;
}
int main() {
    int x, cnt;
    for(int n = 2; n < 246913 ; n++){
        if(primeCheck(n)) isPrime[n] = true;
    }
    while(true){
        cnt = 0;
        cin >> x;
        if(x == 0) break;
        for(int n = x + 1 ; n <= 2 * x ; n++){
            if(isPrime[n]) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}