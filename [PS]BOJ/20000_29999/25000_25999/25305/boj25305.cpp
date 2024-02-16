#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'

int main() {
    fastio
    int sz, cut, val;
    vector<int> score;
    cin >> sz >> cut;
    while(sz--){
        cin >> val;
        score.push_back(val);
    }
    sort(score.begin(), score.end(), greater<>());
    cout << score[cut - 1] << endl;
    return 0;
}