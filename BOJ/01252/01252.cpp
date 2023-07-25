#include <iostream>
#include <algorithm>
#include <string>
#define endl '\n'
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int carry = 0, sum = 0, idx;
    string v1, v2;
    cin >> v1 >> v2;
    if(v1[0] == '0' && v1.size() != 1){
        idx = 0;
        for(int n = 1 ; n < v1.size() - 1; n++){
            if(v1[n - 1] == v1[n]) idx++;
            else break;
        }
        v1.erase(0, idx + 1);
    }
    if(v2[0] == '0' && v2.size() != 1){
        idx = 0;
        for(int n = 1 ; n < v2.size() - 1; n++){
            if(v2[n - 1] == v2[n]) idx++;
            else break;
        }
        v2.erase(0, idx + 1);
    }
    
    if(v1.size() < v2.size()) swap(v1, v2);
    for(int n = v1.size() - 1, m = v2.size() - 1 ; n >= 0; ){
        if(m != -1)
            sum = v1[n] + v2[m] - 2 * '0' + carry;
        else
            sum = v1[n] - '0' + carry;
        if(sum >= 2) carry = 1;
        else carry = 0;
        sum %= 2;
        v1[n] = sum + '0';
        n--;
        if(m != -1)
            m--;
        if(n == -1)
            break;
    }
    if(carry == 1)
        cout << carry;
    cout << v1 << endl;
    return 0;
}