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
int zerocnt(string str){
    int cnt = 0;
    loop(n, str.size()){
        if(str[n] == '0')
            cnt++;
    }
    return cnt;
}
int main() {
    fastio
    vector<int> vc(1000001);
    vc[0] = 0;
    for(int n = 1 ; n <= 1000000 ; n++){
        vc[n] = vc[n - 1] + zerocnt(to_string(n));
    }
    int sz, N, M;
    cin >> sz;
    while(sz--){
        cin >> N >> M;
        if(N == 0) cout << vc[M] + 1 << endl;
        else cout << vc[M] - vc[N - 1] << endl;
    }
    return 0;
}