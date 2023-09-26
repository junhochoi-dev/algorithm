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

int main() {
    fastio
    int N, prev = 1, multip = 0, two = 2, sz = 0;
    cin >> N;
    while(true){
        if(multip >= N){
            int val = N - prev;
            vector<int> vc;
            while(val != 0){
                vc.push_back(val % 2);
                val /= 2;
            }
            loop(n, sz - vc.size()) cout << 4;
            for(int n = vc.size() - 1 ; n >= 0 ; n--) cout << (vc[n] == 0 ? 4 : 7);
            break;
        }
        prev = multip + 1;
        multip += two;
        two *= 2;
        sz++;
    }
    return 0;
}