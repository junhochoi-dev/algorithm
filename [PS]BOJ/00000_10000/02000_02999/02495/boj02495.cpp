#include <iostream>
#include <algorithm>
#include <string>
#define endl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cnt, ans;
    string str;
    while(cin >> str){
        ans = cnt = 1;
        for(int n = 1 ; n < str.size() ; n++){
            if(str[n - 1] == str[n]) cnt++;
            else cnt = 1;
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }
    return 0;
}