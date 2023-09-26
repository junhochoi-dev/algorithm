#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'
int main() {
    fastio
    bool check = false;
    int sz, arr[1000000], dice, first, second;
    vector<int> one;
    cin >> sz;
    sz++;
    loop(n, sz) {
        cin >> arr[n];
        if(arr[n] == 1) one.push_back(n);
    }
    cin >> dice;
    if(one.size() == 0){
        loop(n, sz){
            if(n + dice < sz){
                if(arr[n] >= 3 && arr[n+dice] >= 2){
                    check = true;
                    first = n;
                    second = n + dice;
                    break;
                }
            }
        }
    }
    else{
        if(one.size() == 1) {
            if(one[0] + dice < sz){
                if (arr[one[0] + dice] >= 2) {
                    check = true;
                    first = one[0];
                    second = one[0] + dice;
                }
            }
            if(one[0] - dice >= 0){
                if(arr[one[0] - dice] >= 3){
                    check = true;
                    first = one[0] - dice;
                    second = one[0];
                }
            }
        }
        if(one.size() == 2){
            if(one[1] - one[0] == dice){
                check = true;
                first = one[0];
                second = one[1];
            }
        }
    }
    if(check){
        cout << "YES" << endl;
        cout << first << ' ' << second << endl;
    }
    else cout << "NO" << endl;
    return 0;
}
