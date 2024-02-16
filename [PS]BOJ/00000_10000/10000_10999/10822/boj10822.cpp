#include <iostream>
#include <string>
using namespace std;
int main(){
    int idx = 0, sum = 0;
    string str, tmp;
    cin >> str;
    for(int n = idx ; n < str.size() ; n++){
        if(str[n] == ','){
            tmp = str.substr(idx, n - idx);
            sum += stoi(tmp);
            idx = n + 1;
        }
    }
    tmp = str.substr(idx, str.size() - idx);
    sum += stoi(tmp);
    cout << sum << endl;
    return 0;
}