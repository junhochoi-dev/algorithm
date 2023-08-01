#include <iostream>
#include <algorithm>
#include <string>
#define SIZE 20
using namespace std;
bool arr[20];
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    string order;
    int cnt, value;
    fill(arr, arr + SIZE, false);
    cin >> cnt;
    for(int n = 0 ; n < cnt ; n++){
        cin >> order;
        cin.ignore();
        if(order == "add"){
            cin >> value;
            if(!arr[value - 1]){ arr[value - 1] = true; }
        }
        else if(order == "remove"){
            cin >> value;
            if(arr[value - 1]){ arr[value - 1] = false; }
        }
        else if(order == "check"){
            cin >> value;
            if(arr[value - 1]){ cout << 1 << '\n'; }
            else{ cout << 0 << '\n'; }
        }
        else if(order == "toggle"){
            cin >> value;
            if(arr[value - 1]){ arr[value - 1] = false; }
            else{ arr[value - 1] = true; }
        }
        else if(order == "all"){ fill(arr, arr + SIZE, true); }
        else if(order == "empty"){ fill(arr, arr + SIZE, false); }
    }
    return 0;
}