#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int size, max = 0, value;
    cin >> size;
    for(int n = 0 ; n < size ; n++){
        cin >> value;
        if(max < value)
            max = value;
    }
    cout << max << endl;
    return 0;
}