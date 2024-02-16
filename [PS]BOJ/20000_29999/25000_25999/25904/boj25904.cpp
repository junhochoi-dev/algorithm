#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <map>
#include <set>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define endl '\n'
int main() {
    fastio
    int sz, volume, vol, cnt = 0;
    cin >> sz >> volume;
    queue<int> que;
    loop(n, sz){
        cin >> vol;
        que.push(vol);
    }
    while(true){
        int tmp = que.front();
        que.pop();
        if(volume++ > tmp) break;
        que.push(tmp);
        cnt++;
    }
    cout << cnt % sz + 1 << endl;
    return 0;
}