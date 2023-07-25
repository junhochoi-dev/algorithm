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
    int arr[3];
    loop(n, 3) cin >> arr[n];
    int one = 0, two = 0;
    loop(n, 3) {
        if(arr[n] == 1) one++;
        else two++;
    }
    cout << (two > one ? 2 : 1) << endl;
    return 0;
}