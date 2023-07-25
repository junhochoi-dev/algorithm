#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'

#define SIZE 200000
int root[SIZE];
int friend_cnt[SIZE];

void init() {
    loop(n, SIZE) {
        root[n] = n;
        friend_cnt[n] = 1;
    }
}

int rootFind(int in){
    if(root[in] == in) return root[in];
    return root[in] = rootFind(root[in]);
}

void rootUnion(int in1, int in2){
    in1 = rootFind(in1);
    in2 = rootFind(in2);
    root[in1] = in2;
    friend_cnt[in1] = friend_cnt[in2] = friend_cnt[in1] + friend_cnt[in2];
}

int main() {
    fastio
    string name1, name2;
    int tc, sz;
    cin >> tc;
    while(tc--){
        cin >> sz;
        init();
        int idx = 0;
        map<string, int> dict; // name, index
        loop(n, sz){
            cin >> name1 >> name2;
            if(dict.find(name1) == dict.end()) dict.insert({name1, idx++});
            if(dict.find(name2) == dict.end()) dict.insert({name2, idx++});
            if(rootFind(dict[name1]) != rootFind(dict[name2])) rootUnion(dict[name1], dict[name2]);
            cout << friend_cnt[rootFind(dict[name1])] << endl;
        }
    }
    return 0;
}