#include <iostream>
#include <string>
using namespace std;
string arr[] = {"000000", "001111", "010011", "011100", "100110", "101001", "110101", "111010"};
char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
int decode(string tmp){
    int cnt;
    for(int n = 0 ; n < 8 ; n++){
        cnt = 0;
        for(int m = 0 ; m < 6 ; m++){
            if(tmp[m] != arr[n].at(m)) cnt++;
        }
        if(cnt < 2)
            return n;
    }
    return -1;
}
int main() {
    string tmp, ans;
    int cnt;
    string input;
    cin >> cnt >> input;
    for(int n = 0 ; n < cnt ; n++){
        tmp = input.substr(n * 6, 6);
        if(decode(tmp) == -1){
            cout << n + 1 << endl;
            return 0;
        }
        else
            ans.append(1, alphabet[decode(tmp)]);
    }
    cout << ans << endl;
    return 0;
}