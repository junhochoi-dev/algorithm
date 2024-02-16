#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int test_case, start, end, distance, idx;
    cin >> test_case;
    for(int n = 0 ; n < test_case ; n++){
        cin >> start >> end;
        distance = end - start;
        if(distance <= 3){
            cout  << distance << endl;
        }
        else{
            idx = (int)sqrt(distance);
            if(idx * idx == distance){
                cout << 2 * (idx - 1) + 1 << endl;
            }
            else if(idx * idx + idx >= distance){
                cout << 2 * idx << endl;
            }
            else{
                cout << 2 * idx + 1 << endl;
            }
        }
    }
    return 0;
}