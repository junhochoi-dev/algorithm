#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> vt;
    vector<bool> permutation;
    int size, S, value, sum, cnt = 0;
    cin >> size >> S;
    for(int n = 0 ; n < size ; n++){
        cin >> value;
        vt.push_back(value);
        permutation.push_back(true);
    }
    for(int n = 0 ; n < size ; n++){
        permutation[n] = false;
        sort(permutation.begin(), permutation.end());
        do {
            sum = 0;
            for(int n = 0 ; n < size ; n++) if(!permutation[n]) sum += vt[n];
            if(sum == S) cnt++;
        }while(next_permutation(permutation.begin(), permutation.end()));
    }
    cout << cnt << endl;
    return 0;
}