#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int ans = 1, sum = 1;
    bool odd = false;
    loop(i, 3){
        int cocktail; cin >> cocktail;
        sum *= cocktail;
        if(cocktail % 2) {
            ans *= cocktail;
            odd = true;
        }
    }
    cout << (odd ? ans : sum);
    return 0;
}