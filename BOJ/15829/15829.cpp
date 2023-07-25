#include <iostream>
#define MUL 31
#define MOD 1234567891
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char ch;
    int size;
    unsigned long long sum = 0, R = 1;
    cin >> size;
    for(int n = 0 ; n < size ; n++){
        cin >> ch;
        sum = (sum + (ch - 'a' + 1) * R) % MOD;
        R = (R * 31) % MOD;
    }
    cout << sum << endl;
    return 0;
}