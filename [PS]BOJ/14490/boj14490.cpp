#include <iostream>
#include <algorithm>
using namespace std;
int GCD(int a, int b){
    int tmp;
    if(a < b)
        swap(a, b);
    while(b != 0){
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int main() {
    int N, M, gcd;
    scanf("%d:%d", &N, &M);
    gcd = GCD(N, M);
    cout << N / gcd << ':' << M / gcd << endl;
    return 0;
}