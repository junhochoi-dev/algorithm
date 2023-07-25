#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    while(true){
        getline(cin, str);
        if(str == ".")
            break;
        for(int n = 0 ; n < str.size() ; n++){
            if(!(str[n] == '[' || str[n] == ']' || str[n] == '(' || str[n] == ')' || str[n] == '.')){
                str.erase(n,1);
                n--;
            }
        }
        while(true){
            if(str.size() == 1 && str == "."){
                cout << "yes" << endl;
                goto jmp;
            }
            else if(str.size() == 1 && str != "."){
                cout << "no" << endl;
                goto jmp;
            }
            for(int n = 0 ; n < str.size() ; n++){
                if(n == str.size() - 1 && str[n] =='.'){
                    cout << "no" << endl;
                    goto jmp;
                }
                if(str[n] == '(' && str[n + 1] == ')'){
                    str.erase(n,2);
                    n--;
                    break;
                }
                if(str[n] == '[' && str[n + 1] == ']'){
                    str.erase(n,2);
                    n--;
                    break;
                }
            }
        }
        jmp:;
    }
	return 0;
}