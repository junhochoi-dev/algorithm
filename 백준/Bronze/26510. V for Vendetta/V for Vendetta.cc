#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N; while(cin >> N){
        loop(i, N){
            loop(j, i) cout << " ";
            cout << "*";
            loop(j, (N - i) * 2 - 3) cout << " ";
            if(i != N - 1) cout << "*";
            cout << endl;
        }
    }
    return 0;
}

