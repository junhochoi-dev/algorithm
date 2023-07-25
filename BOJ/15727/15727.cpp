#include <iostream>
using namespace std;
int main(){
    int distance, cnt = 0;
    cin >> distance;
    if(distance >= 5){
        cnt += distance / 5;
        distance %= 5;
    }
    if(distance >= 4){
        cnt += distance / 4;
        distance %= 4;
    }
    if(distance >= 3){
        cnt += distance / 3;
        distance %= 3;
    }
    if(distance >= 2){
        cnt += distance / 2;
        distance %= 2;
    }
    cout << cnt + (distance % 2) << endl;
    return 0;
}