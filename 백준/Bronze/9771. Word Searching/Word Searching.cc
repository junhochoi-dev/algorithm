#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int ans = 0;
    string word, sentence;
    cin >> word; cin.ignore();
    while(getline(cin, sentence)){
        loop(i, sentence.size()) {
            int compare = 0;
            loop(j, word.size()){
                if(sentence[i + j] != word[j]) break;
                compare++;
            }
            if(compare == word.size()) ans++;
        }
    }
    cout << ans;
    return 0;
}