#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

struct WORD{
    string word;
    int cnt;
    WORD(string word, int cnt) { this->word = word; this->cnt = cnt; }
};

bool compare(WORD a, WORD b){
    if(a.cnt == b.cnt){
        if(a.word.size() == b.word.size()){
            return a.word.compare(b.word) < 0;
        }
        return a.word.size() > b.word.size();
    }
    return a.cnt > b.cnt;
}

int main() {
    fastio
    int N, M; cin >> N >> M;
    map<string, int> words;
    while(N--){
        string word; cin >> word;
        if(word.size() < M) continue;
        words[word] = (words.count(word) == 0 ? 1 : words[word] + 1);
    }
    vector<WORD> wordrank;
    for(auto element: words){
        wordrank.push_back(WORD(element.first, element.second));
    }
    sort(wordrank.begin(), wordrank.end(), compare);
    for(auto element: wordrank) cout << element.word << endl;
    return 0;
}