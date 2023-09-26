#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int alphabet[26] = {0, };
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cnt_odd = 0, tmp = -1, index = -1, tmp_i = 0;
    string str;
    cin >> str;
    // alphabet cnt
    for(int n = 0 ; n < str.size() ; n++){ alphabet[str[n] - 'A']++; }
    // how many odd alphabet
    for(int n = 0 ; n < 26 ; n++){
        if(alphabet[n] % 2 == 1){
            cnt_odd++;
            index = n;
        }
    }
    // no Palindrome
    if(cnt_odd > 1){
        cout << "I'm Sorry Hansoo" << endl;
        return 0;
    }
    for(int n = 0 ; n < 26 ; n++){
        if(alphabet[n] > 0){
            tmp = alphabet[n] / 2;
            if(n == index)
                tmp_i = alphabet[n] / 2;
            for(int m = 0 ; m < tmp ; m++){
                cout << (char)('A' + n);
                alphabet[n]--;
            }
        }
    }
    if(index != -1){
        for(int n = 0 ; n < alphabet[index] - tmp_i ; n++) {
            cout << (char)('A' + index);
            alphabet[index]--;
        }
    }
    for(int n = 25 ; n >= 0 ; n--){
        if(alphabet[n] > 0){
            for(int m = 0 ; m < alphabet[n] ; m++){
                cout << (char)('A' + n);
            }
        }
    }
    return 0;
}