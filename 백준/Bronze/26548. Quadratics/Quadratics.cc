#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    cout<<fixed;
    cout.precision(3);
    int N; cin >> N;
    while(N--){
        double a, b, c; cin >> a >> b >> c;
        cout << (- b + sqrt(b * b - 4 * a * c)) / 2 / a << ", ";
        cout << (- b - sqrt(b * b - 4 * a * c)) / 2 / a << endl;
    }
    return 0;
}