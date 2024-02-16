#include <iostream>
#include <string>
using namespace std;
int main(){
    string str, key;
    getline(cin, str);
    cin >> key;
    for(int n = 0, m = 0 ; n < str.size() ; n++){
        if(str[n] == ' ')
            continue;
        str[n] = str[n] - key[n % key.size()] + 'a' - 1;
        if(!(str[n] >= 'a' && str[n] <= 'z'))
            str[n] += 26;
    }
    cout << str << endl;
    return 0;
}