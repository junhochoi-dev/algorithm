#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <map>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'

int main() {
    fastio
    char game;
    string name;
    int need, sz, wait = 0, gameCnt = 0;
    map<string, bool> dict;
    cin >> sz >> game;
    if(game == 'Y') need = 1;
    if(game == 'F') need = 2;
    if(game == 'O') need = 3;
    while(sz--){
        cin >> name;
        if(dict.find(name) == dict.end()){
            dict.insert({name, true});
            wait++;
        }
        else continue;
        if(wait == need){
            gameCnt++;
            wait = 0;
        }
    }
    cout << gameCnt << endl;
    return 0;
}