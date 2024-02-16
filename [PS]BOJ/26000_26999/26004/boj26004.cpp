#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>
#include <cmath>
#include <queue>
#include <map>
#include <set>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'

int main() {
    fastio
    string str;
    int sz, arr[5] = {0, 0 ,0 ,0, 0};
    cin >> sz >> str;
    loop(n, sz){
        if(str[n] == 'H') arr[0]++;
        if(str[n] == 'I') arr[1]++;
        if(str[n] == 'A') arr[2]++;
        if(str[n] == 'R') arr[3]++;
        if(str[n] == 'C') arr[4]++;
    }
    cout << *min_element(arr, arr + 5) << endl;
    return 0;
}