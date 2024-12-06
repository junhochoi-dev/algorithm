#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int minimum = INT_MAX, maximum = INT_MIN;
    int L, D, X; cin >> L >> D >> X;
    for(int num = L; num <= D; num++){
        int N = num, sum = 0;
        while(N){
            sum += N % 10;
            N /= 10;
        }
        if(sum != X) continue;
        minimum = min(minimum, num);
        maximum = max(maximum, num);
    }
    cout << minimum << endl << maximum;
    return 0;
}