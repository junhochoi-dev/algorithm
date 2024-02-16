#include <iostream>
#include <string>
#define endl '\n'
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    string str;
    int size, sum;
    bool alphabet[26];
    cin >> size;
    for(int n = 0 ; n < size ; n++){
        cin >> str;
        sum = 0;
        for(int m = 0 ; m < 26 ; m++) alphabet[m] = false;
        for(int m = 0 ; m < str.size() ; m++) alphabet[str[m] - 'A'] = true;
        for(int m = 0 ; m < 26 ; m++) if(alphabet[m] == false) sum += 65 + m;
        cout << sum << endl;
    }
    return 0;
}