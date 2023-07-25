#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define MOD 1000000000 + 7
long long calculate(long long val, string cal){
    long long op = stoll(cal.substr(1, cal.size() - 1));
    switch (cal[0]) {
        case '+':{
            val += op;
            break;
        }
        case '-':{
            if(val < op) val = 0;
            else val -= op;
            break;
        }
        case '*':{
            val *= op;
            break;
        }
    }
    // cout << val << endl;
    return val;
}
int main() {
    fastio;
    long long tc, val;
    string cal1, cal2;
    cin >> tc >> val;
    while(tc--){
        cin >> cal1 >> cal2;
        val = calculate(val, cal1) > calculate(val, cal2) ? calculate(val, cal1) : calculate(val, cal2);
        val %= MOD;
    }
    cout << val << endl;
    return 0;
}