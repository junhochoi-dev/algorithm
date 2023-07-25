#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    int sum = 0;
    string str;
    cin >> str;
    for(int n = 0; n < str.size(); n++){
        if(str[n] >= 'A' && str[n] <= 'Z'){
            sum += (str[n] - 'A' + 10) * pow (16, str.size() - 1 - n);
        }
        else{
            sum += (str[n] - '0') * pow (16, str.size() - 1 - n);
        }
    }
    cout << sum << endl;
    return 0;
}