#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int height, order[9] = {1, 1, 0, 0, 0, 0, 0, 0, 0}, sum;
    vector<int> dwarf;
    for(int n = 0 ; n < 9 ; n++) {
        cin >> height;
        dwarf.push_back(height);
    }
    sort(dwarf.begin(), dwarf.end());
    while(true){
        sum = 0;
        for(int n = 0 ; n < 9 ; n++){
            if(order[n] == 1) continue;
            sum += dwarf[n];
        }
        if(sum == 100) break;
        next_permutation(order, order + 9);
    }
    for(int n = 0 ; n < 9 ; n++) if(order[n] != 1) cout << dwarf[n] << endl;
    return 0;
}