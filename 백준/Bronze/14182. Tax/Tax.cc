#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    while(true){
        int income, tax; cin >> income;
        if(income == 0) break;
        if(income > 5'000'000) tax = int(income * 0.2);
        else if(income > 1'000'000) tax = int(income * 0.1);
        else tax = 0;
        cout << income - tax << endl;
    }
    return 0;
}