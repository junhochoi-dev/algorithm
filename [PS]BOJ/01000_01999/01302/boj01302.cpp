#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#define endl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int size, idx = -1, best_sellor = 0, *cnt;
    vector<string> vt, list;
    string str, tmp = "TMP";
    cin >> size;
    cnt = new int[size];
    for(int n = 0 ; n < size ; n++){
        cin >> str;
        vt.push_back(str);
    }
    sort(vt.begin(), vt.end());
    for(int n = 0 ; n < size ; n++){
        if(tmp == vt[n]) cnt[idx]++;
        else{
            list.push_back(vt[n]);
            cnt[++idx]++;
            tmp = vt[n];
        }
    }
    for(int n = 0 ; n < list.size() ; n++) best_sellor = max(best_sellor, cnt[n]);
    for(int n = 0 ; n < list.size() ; n++) if(best_sellor == cnt[n]){
        cout << list[n] << endl;
        break;
    }
    return 0;
}