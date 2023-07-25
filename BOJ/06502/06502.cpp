#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int r, w, l, n = 1;
    while(true){
        cin >> r;
        if(r == 0) break;
        cin >> w >> l;  
        if(2 * r >= sqrt(w * w + l * l))
            cout << "Pizza " << n << " fits on the table." << endl;
        else
            cout << "Pizza " << n << " does not fit on the table." << endl;
        n++;
    }
    return 0;
}