#include <iostream>
#include <cstring>
#include <string>
using namespace std;
bool arr[1000]; // 123 - 987
bool checkRight(string num_set, string compare_set, int strike, int ball){
    int tmp_strike, tmp_ball;
    tmp_strike = tmp_ball = 0;
    for(int n = 0 ; n < 3 ; n++){
        for(int m = 0 ; m < 3 ; m++){
            if(num_set[n] == compare_set[m]){
                if(n == m) tmp_strike++;
                else tmp_ball++;
            }
        }
    }
    if(strike == tmp_strike && ball == tmp_ball) return true;
    else return false;
}
int main() {
    int size, strike, ball, ans = 0;
    string num_set, compare_set;
    memset(arr, true, sizeof(arr));
    cin >> size;
    for(int n = 0 ; n < size ; n++){
        cin >> num_set >> strike >> ball;
        for(int m = 123 ; m <= 987 ; m++){
            if(arr[m] == false) continue;
            compare_set = to_string(m);
            if(compare_set[1] == '0' || compare_set[2] == '0')arr[m] = false;
            if(compare_set[0] == compare_set[1] || compare_set[1] == compare_set[2] || compare_set[0] == compare_set[2]) arr[m] = false;
            if(!checkRight(num_set, compare_set, strike, ball)) arr[m] = false;
        }
    }
    for(int n = 123 ; n <= 987 ; n++) if(arr[n]) ans++;
    cout << ans << endl;
    return 0;
}