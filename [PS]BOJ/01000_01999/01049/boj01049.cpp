#include <iostream>
#include <algorithm>
#define endl '\n'
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int string, brand, set = 9999, single = 9999, brand_set, brand_single;
    cin >> string >> brand;
    for(int n = 0 ; n < brand ; n++){
        cin >> brand_set >> brand_single;
        if(brand_set < set)
            set = brand_set;
        if(brand_single < single)
            single = brand_single;
    }
    if(single * 6 < set) cout << single * string << endl;
    else{
        if(string % 6 * single > set) cout << (string / 6 + 1) * set << endl;
        else cout << (string / 6) * set + (string % 6) * single << endl;
    }
    return 0;
}