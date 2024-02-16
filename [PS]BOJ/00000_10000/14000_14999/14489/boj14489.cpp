#include <iostream>
using namespace std;
int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if(A + B < 2 * C)
        cout << A + B << endl;
    else
        cout << A + B - 2 * C << endl;
    return 0;
}