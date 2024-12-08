#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N, ans = 0; cin >> N;
    loop(i, N){
        string num = to_string(i + 1);
        loop(j, num.size()){
            if(num[j] == '3' || num[j] == '6' || num[j] == '9'){
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}