#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'

int main() {
    fastio
    char mem[] = {'A', 'B', 'C'};
    int arr[3];
    loop(n, 3) cin >> arr[n];
    int sum = arr[0] + arr[1] + arr[2];
    if(sum == 1 || sum == 2){
        if(sum == 1) loop(n, 3) if(arr[n] == 1) cout << mem[n];
        if(sum == 2) loop(n, 3) if(arr[n] == 0) cout << mem[n];
    }
    else cout << '*' << endl;
    return 0;
}