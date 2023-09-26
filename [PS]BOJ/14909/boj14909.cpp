#include <iostream>
using namespace std;
int main(){
    int num, cnt = 0;
    while(cin >> num){
        if(num > 0)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}