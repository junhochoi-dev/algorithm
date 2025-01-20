#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

#define SIZE 401

int main() {
    fastio
    int T, sum = 0; cin >> T;
    while(T--){
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        bool answer = ((a + b + c) <= 125 || (a <= 56 && b <= 45 && c <= 25)) && d <= 7;
        cout << answer << endl;
        if(answer) sum++;
    }
    cout << sum;
    return 0;
}