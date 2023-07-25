#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> permutation, select;
    int K, value;
    while(true){
        cin >> K;
        if(K == 0) break;
        for(int n = 0 ; n < K ; n++) {
            cin >> value;
            select.push_back(value);
        }
        for(int n = 0 ; n < 6 ; n++) permutation.push_back(0);
        for(int n = 0 ; n < K - 6 ; n++) permutation.push_back(1);
        do{
            for(int n = 0 ; n < permutation.size() ; n++){
                if(permutation[n] == 0) cout << select[n] << ' ';
            }
            cout << endl;
        }while(next_permutation(permutation.begin(), permutation.end()));
        permutation.clear();
        select.clear();
        cout << endl;
    }
    return 0;
}