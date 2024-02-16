#include <iostream>

using namespace std;

int main() {
    int chicken;
    int coke, beer, set;
    cin >> chicken >> coke >> beer;
    set = beer + coke / 2;
    cout << ((chicken > set) ? set : chicken) << endl;
    return 0;
}