#include <iostream>
#include <algorithm>

using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    int N, price;
    cin >> N >> price;
    if(N >= 20) price = min(price / 100 * 75, price - 2000);
    else if(N >= 15) price = min(price / 100 * 90, price - 2000);
    else if(N >= 10) price = min(price / 100 * 90, price - 500);
    else if(N >= 5) price -= 500;
    cout << (price >= 0 ? price : 0) << endl;
    return 0;
}