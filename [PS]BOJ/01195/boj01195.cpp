#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string top, bottom;
    cin >> top >> bottom;
    if(bottom.size() > top.size()) swap(top, bottom);
    int bs = bottom.size(), ts = top.size();
    int sz = bottom.size(), ans = bs + ts;
    // front partial
    for(int n = 1 ; n <= bs - 1 ; n++){
        bool checkCombination = true;
        for(int m = 0 ; m < n ; m++){
            if(top[m] + bottom[sz - n + m] - '0' - '0' >= 4){
                checkCombination = false;
                break;
            }
        }
        if(checkCombination) ans = min(ans, bs + ts - n);
    }
    // include
    for(int n = 0 ; n < ts - bs + 1 ; n++){
        bool checkCombination = true;
        for(int m = 0 ; m < bs ; m++){
            if(top[m + n] + bottom[m] - '0' - '0' >= 4){
                checkCombination = false;
                break;
            }
        }
        if(checkCombination){
            ans = min(ans, ts);
            break;
        }
    }
    // end partial
    reverse(top.begin(), top.end());
    reverse(bottom.begin(), bottom.end());
    for(int n = 1 ; n <= bs - 1 ; n++){
        bool checkCombination = true;
        for(int m = 0 ; m < n ; m++){
            if(top[m] + bottom[sz - n + m] - '0' - '0' >= 4){
                checkCombination = false;
                break;
            }
        }
        if(checkCombination) ans = min(ans, bs + ts - n);
    }
    cout << ans << endl;
    return 0;
}