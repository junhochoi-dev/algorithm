#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string value;
    int notation, sum = 0, tmp;
    cin >> value >> notation;
    for(int n = 0 ; n < value.size() ; n++){
        if(value[n] >= 'A' && value[n] <= 'Z') tmp = value[n] - 'A' + 10;
        else tmp = value[n] - '0';
        sum += tmp * pow(notation, value.size() - n - 1);
    }
    cout << sum << endl;
    return 0;
}