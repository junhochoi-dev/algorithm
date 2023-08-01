#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
int main() {
    fastio;
    string name;
    int weekend;
    map<string, int> dict;
    cin >> weekend;
    for(int n = 0 ; n < weekend ; n++){
        for(int m = 0 ; m < 4 ; m++){
            for(int k = 0 ; k < 7 ; k++){
                cin >> name;
                if(name == "-") continue;
                int workTime;

                if(m == 0 || m == 2) workTime = 4;
                else if(m == 1) workTime = 6;
                else workTime = 10; // m == 3

                if(dict.find(name) == dict.end()) dict.insert({name, workTime});
                else dict[name] += workTime;
            }
        }
    }
    int maxTime = -1, minTime = 987654321;
    for(auto iter = dict.begin() ; iter != dict.end() ; iter++){
        maxTime = maxTime < iter->second ? iter->second : maxTime;
        minTime = minTime > iter->second ? iter->second : minTime;
    }
    if(maxTime - minTime > 12) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}