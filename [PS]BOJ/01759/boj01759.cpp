#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> permutation;
    vector<char> kinds, output;
    char ch;
    int L, C, consonant, vowel;
    cin >> L >> C;
    for(int n = 0 ; n < L ; n++) permutation.push_back(0);
    for(int n = 0 ; n < C - L ; n++) permutation.push_back(1);
    for(int n = 0 ; n < C ; n++){
        cin >> ch;
        kinds.push_back(ch);
    }
    sort(kinds.begin(), kinds.end());
    do{
        consonant = vowel = 0;
        for(int n = 0 ; n < permutation.size() ; n++){
            if(permutation[n] == 0){
                if(kinds[n] == 'a' || kinds[n] == 'e' || kinds[n] == 'i' || kinds[n] == 'o' || kinds[n] == 'u') vowel++;
                else consonant++;
                output.push_back(kinds[n]);
            }
        }
        if(vowel == 0 || consonant <= 1){
            output.clear();
            continue;
        }
        for(int n = 0 ; n < output.size() ; n++) cout << output[n];
        cout << endl;
        output.clear();
    }while(next_permutation(permutation.begin(), permutation.end()));
    return 0;
}
// consonant
// vowel