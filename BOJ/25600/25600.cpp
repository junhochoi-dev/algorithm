#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <map>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    int tc, a, d, g;
    cin >> tc;
    int max = 0;
    while(tc--){
        int sum = 0;
        cin >> a >> d >> g;
        if((d + g) == a) sum += a * (d + g);
        sum += a * (d + g);
        if(max < sum) max = sum;
    }
    cout << max << endl;
    return 0;
}