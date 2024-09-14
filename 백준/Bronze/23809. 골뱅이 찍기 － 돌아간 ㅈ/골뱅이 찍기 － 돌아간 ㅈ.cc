#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N; cin >> N;
    loop(i, N){
        loop(j, N) cout << "@";
        loop(j, N * 3) cout << " ";
        loop(j, N) cout << "@";
        cout << endl;
    }
    loop(i, N){
        loop(j, N) cout << "@";
        loop(j, N * 2) cout << " ";
        loop(j, N) cout << "@";
        cout << endl;
    }
    loop(i, N){
        loop(j, N * 3) cout << "@";
        cout << endl;
    }
    loop(i, N){
        loop(j, N) cout << "@";
        loop(j, N * 2) cout << " ";
        loop(j, N) cout << "@";
        cout << endl;
    }
    loop(i, N){
        loop(j, N) cout << "@";
        loop(j, N * 3) cout << " ";
        loop(j, N) cout << "@";
        cout << endl;
    }
    return 0;
}