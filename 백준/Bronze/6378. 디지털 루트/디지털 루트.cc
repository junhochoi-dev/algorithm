#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    while(true){
        string num; cin >> num;
        if(num == "0") break;
        while(true){
            int sum = 0;
            loop(i, num.size()) sum += num[i] - '0';
            if(sum / 10 == 0){
                cout << sum << endl;
                break;
            }
            num = to_string(sum);
        }
    }
    return 0;
}