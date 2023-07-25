#include <iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    for(int n = 0 ; n < num ; n++){
        for(int m = 0 ; m < num ; m++){
            if(n >= m)
                cout << '*';
        }
        cout << endl;
    }
    return 0;
}