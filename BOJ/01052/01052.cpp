#include <iostream>
#define endl '\n'
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int bottle, tmp, min, cnt, origin;
    cin >> bottle >> min;
    origin = bottle;
    while(true){
        cnt = 0;
        tmp = bottle;
        while(tmp != 0){
            if(tmp % 2 == 1) cnt++;
            tmp /= 2;
        }
        if(cnt > min)
            bottle++;
        else
            break;
    }
    cout << bottle - origin << endl;
    return 0;
}

