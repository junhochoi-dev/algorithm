#include <iostream>
#include <cstring>
using namespace std;
int main() {
    string str;
    int size;
    cin >> size;
    for(int n = 0 ; n < size ; n++){
        cin >> str;
        for(int k = 0 ; k < str.size() ; k++){
            if(str[k] == '0' && str[k + 1] == '1'){
                cout << " / ";
                cout << str[k];
                cout << str[k + 1];
                
                k++;
                continue;
            }
            else if(str[k] == '1' && str[k + 1] == '0' && str[k + 2] == '0'){
                cout << " / ";
                cout << str[k];
                int jmp_0 = 0;
                for(int m = 1 ; ; m++){
                    int index_0 = k + m;
                    
                    cout << str[index_0];
                    
                    if(index_0 >= str.size()) goto jmp;
                    else if(str[index_0] == '0') jmp_0 = m;
                    else break;
                }
                int jmp_1 = 0;
                for(int m = 1 ; ; m++){
                    int index_1 = k + jmp_0 + m + 1;
                    cout << '.';
                    cout << str[index_1];
                    
                    if(index_1 >= str.size()) goto jmp;
                    else {
                        jmp_1 = m;
                        if(str[index_1 + 1] == '0' && str[index_1 + 2] == '0') {
                            cout<< " # ";
                            goto jmp;
                        }
                        else if(str[index_1 + 1] == '0' && str[index_1 + 2] == '1') {
                            cout<< " @ ";
                            break;
                        }
                        else if(str[index_1 + 1] == '1' && str[index_1 + 2] == '0') {
                            cout<< " ! ";
                            break;
                        }
                    }
                }
                k += jmp_0 + jmp_1;
                continue;
            }
            else {
                cout << "YES" << endl;
                break;
            }
            jmp:
            cout << "NO" << endl;
            break;
        }
    }
    return 0;
}
