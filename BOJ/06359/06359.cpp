#include <iostream>
#include <cmath>
using namespace std;
bool prime_cnt(int num){
    int cnt = 0;
    for(int n = 1; n * n <= num ; n++){
        if(num % n == 0){
            cnt++;
            if(n * n < num){
                cnt++;
            }
        }
    }
    return cnt % 2 == 1 ? true : false;
}
int main(){
    int test_case, room, cnt;
    cin >> test_case;
    for(int n = 0 ; n < test_case ; n++){
        cnt = 0;
        cin >> room;
        for(int m = 1 ; m <= room ; m++){
            if(prime_cnt(m))
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}