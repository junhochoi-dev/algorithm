#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>
#include <cmath>
#include <queue>
#include <map>
#include <set>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'

int main() {
    fastio
    int sz, c, max_friend = 0, leader = 9999;
    bool friendCheck[3000][3000];
    vector<int> classMember[60], student[3000];
    cin >> sz;
    loop(n, sz) loop(m, sz) friendCheck[n][m] = false;
    loop(n, sz) {
        loop(m, 5) {
            cin >> c;
            student[n].push_back(c);
            classMember[(m + 1) * 10 + c].push_back(n);
        }
    }
    loop(n, sz){
        loop(m, 5){
            c = (m + 1) * 10 + student[n][m];
            loop(k, classMember[c].size()){
                friendCheck[n][classMember[c][k]] = true;
            }
        }
        int cnt = 0;
        loop(m, sz) if(friendCheck[n][m]) cnt++;
        if(cnt > max_friend){
            max_friend = cnt;
            leader = n;
        }
        else if(cnt == max_friend && n < leader) leader = n;
    }
    cout << leader + 1 << endl;
    return 0;
}