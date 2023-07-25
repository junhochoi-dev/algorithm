#include <iostream>
#include <string>
#define endl '\n'
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    string str;
    int idx, left = 0, right = 0;
    cin >> str;
    for(int n = 0 ; n < str.size() ; n++) if(str[n] == '0') idx = n;
    for(int n = idx ; n < str.size() ; n++) if(str[n] == '@') right++;
    for(int n = 0 ; n < idx ; n++) if(str[n] == '@') left++;
    cout << left << ' ' << right << endl;
    return 0;
}