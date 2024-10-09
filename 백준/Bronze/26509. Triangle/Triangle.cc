#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int T; cin >> T;
    while(T--){
        bool answer = true;
        int triangle1[3]; loop(i, 3) cin >> triangle1[i];
        sort(triangle1, triangle1 + 3);
        int triangle2[3]; loop(i, 3) cin >> triangle2[i];
        sort(triangle2, triangle2 + 3);
        if(pow(triangle1[0], 2) + pow(triangle1[1], 2) != pow(triangle1[2], 2)) answer = false;
        if(pow(triangle2[0], 2) + pow(triangle2[1], 2) != pow(triangle2[2], 2)) answer = false;
        if(!(triangle1[0] == triangle2[0] && triangle1[1] == triangle2[1])) answer = false;
        cout << (answer ? "YES" : "NO") << endl;
    }

    return 0;
}
