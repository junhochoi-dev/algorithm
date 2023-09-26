#include <iostream>
#define endl '\n'
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int A, B, idx, sum = 0;
    cin >> A >> B;
    for(int n = 1 ; ; n++){
        if(n * (n + 1) / 2 >= B){
            idx = n;
            break;
        }
    }
    for(int n = 1 ; n < idx ; n++) sum += n * n;
    sum += (B - idx * (idx - 1) / 2) * idx;
    for(int n = 1 ; ; n++){
        if(n * (n + 1) / 2 >= A){
            idx = n;
            break;
        }
    }
    for(int n = 1 ; n < idx ; n++) sum -= n * n;
    sum -= (A - 1 - idx * (idx - 1) / 2) * idx;
    cout << sum << endl;
    return 0;
}