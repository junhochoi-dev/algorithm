#include <iostream>
#include <string>
using namespace std;
string SangGuen = "ABC";
string ChangYoung = "BABC";
string HyunJin = "CCAABB";
int main() {
    string test;
    int size, Adrian = 0, Bruno = 0, Goran = 0, max;
    cin >> size >> test;
    for(int n = 0 ; n < size ; n++){
        if(SangGuen[n % 3] == test[n]) Adrian++;
        if(ChangYoung[n % 4] == test[n]) Bruno++;
        if(HyunJin[n % 6] == test[n]) Goran++;
    }
    max = Adrian > Bruno ? Adrian : Bruno;
    max = max > Goran ? max : Goran;
    cout << max << endl;
    if(max == Adrian)
        cout << "Adrian" << endl;
    if(max == Bruno)
        cout << "Bruno" << endl;
    if(max == Goran)
        cout << "Goran" << endl;
    return 0;
}