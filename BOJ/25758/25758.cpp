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
bool alphabet[26];
void compare(string a, string b){
    alphabet[(a[0] > b[1] ? a[0] : b[1]) - 'A'] = true;
    alphabet[(b[0] > a[1] ? b[0] : a[1]) - 'A'] = true;
}
int main() {
    fastio
    int sz;
    string gene;
    vector<string> geneList;
    map<string, bool> dict;
    loop(n, 26) alphabet[n] = false;
    cin >> sz;
    while(sz--){
        cin >> gene;
        if(dict.find(gene) == dict.end()){
            geneList.push_back(gene);
            dict.insert({gene, true});
        }
    }
    loop(n, geneList.size()){
        for(int m = n + 1 ; m < geneList.size() ; m++){
            compare(geneList[n], geneList[m]);
        }
    }
    int cnt = 0;
    loop(n, 26) if(alphabet[n]) cnt++;
    if(cnt == 0){
        cout << 1 << endl << (geneList[0][0] > geneList[0][1] ? geneList[0][0] : geneList[0][1]) << endl;
    }
    else{
        cout << cnt << endl;
        loop(n, 26) if(alphabet[n]) cout << char('A' + n) << ' ';
    }
    return 0;
}