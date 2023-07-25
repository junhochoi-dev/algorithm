#include <cmath>
#include <string>
#include <iostream>
using namespace std;
bool button[10];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string tmp;
    int channel, broken, number, min = 500001, cnt, num_down, num_up;
    bool check;
    cin >> channel >> broken;
    
    for(int n = 0 ; n < 10 ; n++){
        button[n] =  true;    
    }
    for(int n = 0 ; n < broken ; n++){
        cin >> number;
        button[number] = false;
    }
    
    // size == 1
    tmp = to_string(channel);
    if(tmp.size() == 1 && button[channel]){
        cout << 1 << endl;
        return 0;
    }
    
    // only use num button
    check = true;
    tmp = to_string(channel);
    for(int n = 0 ; n < tmp.size() ; n++){
        if(button[tmp[n] - '0'] == false)
            check = false;
    }
    if(check){
        cnt = tmp.size();
        if(min > cnt) min = cnt;
    }
    
    // start from 100
    cnt = abs(100 - channel);
    if(min > cnt) min = cnt;
    
    num_up = num_down = channel;
    // start down from number
    while(num_down >= 0){
        check = true;
        num_down--;
        tmp = to_string(num_down);
        for(int n = 0 ; n < tmp.size() ; n++){
            if(button[tmp[n] - '0'] == false)
                check = false;
        }
        cnt = tmp.size() + abs(channel - num_down);
        if(min < cnt) break;
        if(check) break;
    }
    if(min > cnt && num_down >= 0) min = cnt;
    
    // start up from number
    while(true){
        check = true;
        num_up++;
        tmp = to_string(num_up);
        for(int n = 0 ; n < tmp.size() ; n++){
            if(button[tmp[n] - '0'] == false)
                check = false;
        }
        cnt = tmp.size() + abs(channel - num_up);
        if(min < cnt) break;
        if(check) break;
    }
    if(min > cnt) min = cnt;
    
    cout << min << endl;
    return 0;
}