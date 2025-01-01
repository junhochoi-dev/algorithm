#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    string G;
    int Y, M, D;
    while(true){
        cin >> G; if(G == "#") break;
        bool update = true;
        cin >> Y >> M >> D;
        if(Y < 31) update = false;
        else if(Y == 31 && M < 4) update = false;
        else if(Y == 31 && M == 4 && D <= 30) update = false;
        cout << (update ? "?" : G)
            << " " << Y - (update ? 30 : 0)
            << " " << M << " " << D << endl;
    }
    return 0;
}