#include <iostream>
#include <string>
using namespace std;
int main(){
    int n = 0;
    string str;
    cin >> str;
    while(true){
        if(n == str.size())
            break;
        if(str[n] == '(' && str[n + 1] == ')'){
            str.erase(n, 2);
            n = 0;
            continue;
        }   
        n++;
    }
    cout << str.size() << endl;
    return 0;
}