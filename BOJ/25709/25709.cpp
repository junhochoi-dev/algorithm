#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    int cnt = 0;
    string num;
    cin >> num;
    while(true){
        while(find(num.begin(), num.end(), '1') != num.end()){
            num.erase(find(num.begin(), num.end(), '1'));
            cnt++;
        }
        if(num == "" || stoi(num) == 0) break;
        int tmp = stoi(num) - 1;
        cnt++;
        if(tmp == 0) break;
        num = to_string(tmp);
    }
    cout << cnt << endl;
    return 0;
}