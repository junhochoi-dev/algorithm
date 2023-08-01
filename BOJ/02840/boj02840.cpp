#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    // no repeat alphabet
    // if input alphabet, there are same alphabet or ?
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    char ch;
    vector<char> vt, repeat_check;
    int size, cnt, order, sum = 0;
    cin >> size >> cnt;
    for(int n = 0 ; n < size ; n++) vt.push_back('?');
    for(int n = 0 ; n < cnt ; n++){
        cin >> order >> ch;
        sum += order;
        if(!(vt[sum % size] == ch || vt[sum % size] == '?')){
            cout << '!' << endl;
            return 0;
        }
        if(vt[sum % size] != ch)
            repeat_check.push_back(ch);
        vt[sum % size] = ch;
    }
    if(repeat_check.size() > size){
            cout << '!' << endl;
            return 0;
    }
    sort(repeat_check.begin(), repeat_check.end());
    for(int n = 1 ; n < repeat_check.size() ; n++){
        if(repeat_check[n - 1] == repeat_check[n]){
            cout << '!' << endl;
            return 0;
        }
    }
    for(int n = sum % size ; n >= 0 ; n--) cout << vt[n];
    for(int n = size - 1 ; n > sum % size ; n--) cout << vt[n];
    
    return 0;
}