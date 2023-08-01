#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <map>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    string word, sorted;
    map<string, string> dict;
    queue<string> que;
    int sz;
    cin >> sz;
    while(sz--){
        cin >> word;
        sorted = word;
        sort(sorted.begin(), sorted.end());
        if(dict.find(sorted) == dict.end()) {
            dict.insert({sorted, word});
            que.push(word);
        }
    }
    while(!que.empty()){
        cout << que.front() << endl;
        que.pop();
    }
    return 0;
}