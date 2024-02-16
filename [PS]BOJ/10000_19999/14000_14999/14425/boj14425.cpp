#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'

int main() {
    fastio
    map<string, int> dict;
    string word;
    int sz, ques, cnt = 0;
    cin >> sz >> ques;
    while(sz--){
        cin >> word;
        dict.insert({word, 0});
    }
    while(ques--){
        cin >> word;
        if(dict.find(word) != dict.end()) cnt++;
    }
    cout << cnt << endl;
    return 0;
}