#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <map>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'

int main() {
    fastio
    long long sum = 0, val = 1;
    string str;
    cin >> str;
    for(int n = str.size() - 1, m = 0; n >= 0 ; n--, m++){
        if(m != 0) val *= 26;
        sum += (str[n] - 'A' + 1) * val;
    }
    cout << sum << endl;
    return 0;
}