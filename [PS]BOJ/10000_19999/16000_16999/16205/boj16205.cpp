#include <iostream>
#include <string>
using namespace std;
int main(){
    int num;
    string str, tmp;
    cin >> num >> str;
    switch(num){
        case 1:{
            tmp = str;
            cout << str << endl;
            
            for(int n = 0 ; n < str.size() ; n++){
                if(str[n] >= 'A' && str[n] <= 'Z'){
                    cout << '_' << (char)(str[n] + 32);
                }
                else
                    cout << str[n];
            }
            cout << endl;
            
            str = tmp;
            str[0] -= 32;
            cout << str << endl;
            break;
        }
        case 2:{
            tmp = str;
            for(int n = 0 ; n < str.size() ; n++){
                if(str[n] != '_')
                    cout << str[n];
                else {
                    cout << (char)(str[n + 1] - 32);
                    n++;
                }
            }
            cout << endl;
            cout << tmp << endl;
            str[0] -= 32;
            for(int n = 0 ; n < str.size() ; n++){
                if(str[n] != '_')
                    cout << str[n];
                else
                    str[n + 1] -= 32;
            }
            break;
        }
        case 3:{
            tmp = str;
            str[0] += 32;
            cout << str << endl;
            str[0] -= 32;
            for(int n = 0 ; n < str.size() ; n++){
                if(str[n] >= 'A' && str[n] <= 'Z' && n == 0)
                    cout << (char)(str[n] + 32);
                else if(str[n] >= 'A' && str[n] <= 'Z' && n + 1 != str.size()){
                    cout << '_';
                    cout << (char)(str[n] + 32);
                }
                else if(str[n] >= 'A' && str[n] <= 'Z' && n + 1 == str.size()){
                    cout << '_';
                    cout << (char)(str[n] + 32);
                }
                else
                    cout << str[n];
            }
            cout << endl;
            str[0] -= 32;
            cout << tmp << endl;
            break;
        }
    }
    return 0;
}