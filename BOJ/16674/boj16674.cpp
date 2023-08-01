#include <iostream>
#include <string>
using namespace std;
int main(){
    int arr[4] = {0, 0, 0, 0}; // 0 1 2 8
    string value;
    cin >> value;
    for(int n = 0 ; n < value.size() ; n++){
        switch(value[n]){
            case '0':{
                arr[0]++;
                break;
            }
            case '1':{
                arr[1]++;
                break;
            }
            case '2':{
                arr[2]++;
                break;
            }
            case '8':{
                arr[3]++;
                break;
            }
            default:{
                cout << 0 << endl;
                return 0;
            }
        }
    }
    if((arr[0] == arr[1]) && (arr[2] == arr[3]) && (arr[0] == arr[2])) cout << 8 << endl;
    else if(arr[0] * arr[1] * arr[2] * arr[3] == 0) cout << 1 << endl;
    else cout << 2 << endl;
    return 0;
}