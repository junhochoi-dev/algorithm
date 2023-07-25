#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <map>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
map<string, priority_queue<string, vector<string>, greater<string>>> dict;
struct compare{
    bool operator()(pair<int, string> a, pair<int, string> b){
        if(a.first == b.first) return dict[a.second].top() > dict[b.second].top();
        return a.first < b.first;
    }
};
int main() {
    fastio;
    string word, sorted;
    while(cin >> word){
        sorted = word;
        sort(sorted.begin(), sorted.end());
        if(dict.find(sorted) != dict.end()){
            dict[sorted].push(word);
        }
        else{
            priority_queue<string, vector<string>, greater<string>> tmp;
            dict.insert({sorted, tmp});
            dict[sorted].push(word);
        }
    }
    priority_queue<pair<int, string>, vector<pair<int, string>>, compare> que;
    // size, sorted, front word
    for(auto iter = dict.begin() ; iter != dict.end() ; iter++){
        que.push({iter->second.size(), iter->first});
    }
    int sz = que.size();
    if(sz > 5) sz = 5;
    while(sz--){
        string curr = que.top().second, prev = "#";
        que.pop();
        cout << "Group of size " << dict[curr].size() << ": ";
        while(!dict[curr].empty()){
            if(prev != dict[curr].top()) cout << dict[curr].top() << ' ';
            prev = dict[curr].top();
            dict[curr].pop();
        }
        cout << "." << endl;
    }
    return 0;
}