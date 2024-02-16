#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int tc;
    cin >> tc;
    while(tc--){
        int sz;
        cin >> sz;
        vector<string> numlist;
        loop(n, sz){
            string num;
            cin >> num;
            numlist.push_back(num);
        }
        sort(numlist.begin(),numlist.end());
        bool check = true;
        for(int n = 0 ; n < numlist.size()-1 ; n++){
            if(numlist[n] == numlist[n+1].substr(0,numlist[n].size())){
                check = false;
                break;
            }
        }
        if(check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
