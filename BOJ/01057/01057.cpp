#include <iostream>
#define endl '\n'
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int round_cnt = 0, N, JIMIN, HANSOO;
    cin >> N >> JIMIN >> HANSOO;
    while(true){
        if(JIMIN == HANSOO) break;
        if(JIMIN != 1){
            if(JIMIN % 2 == 1){
                JIMIN = ++JIMIN / 2;
            }
            else JIMIN /= 2;
        }
        if(HANSOO != 1){
            if(HANSOO % 2 == 1){
                HANSOO = ++HANSOO / 2;
            }
            else HANSOO /= 2;
        }
        round_cnt++;
    }
    cout << round_cnt << endl;
    return 0;
}

