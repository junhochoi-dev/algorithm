#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string str;
    int test_case, idx_start = 0, idx_end;
    cin >> test_case;
    cin.ignore();
    for(int n = 0 ; n < test_case ; n++){
        idx_start = 0;
        getline(cin, str);
        for(int k = 0 ; k < str.size() ; k++){
            if(str[k] == ' '){
                idx_end = k - 1;
                reverse(str.begin() + idx_start, str.begin() + idx_end + 1);
                idx_start = k + 1;
            }
        }
        reverse(str.begin() + idx_start, str.end());
        cout << str << endl;
    }
    return 0;
}