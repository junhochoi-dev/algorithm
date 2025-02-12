#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, target = -1; cin >> N;
    while(N--){
        int num; cin >> num;
        if(target < 0){
            target = num;
            continue;
        }
        if(num % target == 0){
            cout << num << endl;
            target = -1;
        }
    }
    return 0;
}