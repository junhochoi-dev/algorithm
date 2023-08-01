#include <iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    for(int n = 1 ; n <= 9 ; n++){
        cout << num << " * " << n << " = " << num * n << endl;
    }    
    return 0;
}