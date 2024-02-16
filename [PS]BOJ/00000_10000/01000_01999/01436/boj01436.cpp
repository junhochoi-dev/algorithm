#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    bool check;
    int num, cnt = 0, m = 1;
    cin >> num;
    while(true){
        check = false;
        str = to_string(m);
        for(int n = 1; n < str.size() - 1; n++){
            if(str[n] == '6' && str[n - 1] == str[n] && str[n + 1] == str[n]){
                cnt++;
                break;
            }
        }
        if(cnt == num){
            cout << m << endl;
            break;
        }
        m++;
    }
    
    return 0;
}