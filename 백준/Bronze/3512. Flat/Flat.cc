#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    cout << fixed;
    cout.precision(6);
    int N, cost; cin >> N >> cost;
    int area = 0, bedroom = 0, balcony = 0;
    while(N--){
        int a; string t; cin >> a >> t;
        area += a;
        if(t == "balcony") balcony += a;
        if(t == "bedroom") bedroom += a;
    }
    double price = (area - (balcony / 2.0)) * cost;
    cout << area << endl << bedroom << endl << price;
    return 0;
}