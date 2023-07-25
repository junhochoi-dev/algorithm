#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    vector<int> oct;
    string bin;
    cin >> bin;
    reverse(bin.begin(), bin.end());
    int sum = 0, idx = 0;
    for(int n = 0, m = 0 ; n < bin.size() ; n++){
        sum += (bin[n] - '0') * pow(2, idx++);
        if(n == bin.size() - 1 || n % 3 == 2){
            oct.push_back(sum);
            sum = idx = 0;
        }
    }
    reverse(oct.begin(), oct.end());
    for(int n = 0 ; n < oct.size() ; n++) cout << oct[n];
    return 0;
}