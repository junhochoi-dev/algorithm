#include <iostream>
using namespace std;
int main(){
    char ch;
    int number, ans;
    cin >> ans;
    while(true){
        cin >> ch;
        if(ch == '=')
            break;
        cin >> number;
        switch(ch){
            case '+':{
                ans += number;
                break;
            }
            case '-':{
                ans -= number;
                break;
            }
            case '*':{
                ans *= number;
                break;
            }
            case '/':{
                ans /= number;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}