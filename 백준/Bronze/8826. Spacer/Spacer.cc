#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int Z; cin >> Z;
    while(Z--){
        int N; cin >> N;
        map<char, int> directions;
        directions['N'] = 0; directions['S'] = 0;
        directions['W'] = 0; directions['E'] = 0;
        string direction; cin >> direction;
        for(char d: direction) directions[d]++;
        cout << abs(directions['W'] - directions['E']) + abs(directions['N'] - directions['S']) << endl;
    }
    return 0;
}