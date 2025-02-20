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
        int E, A, mega = 0; cin >> E >> A;
        cout << "Data Set " << i + 1 << ":" << endl;
        string ans = "drought";
        while(E > A){
            A *= 5;
            mega++;
        }
        loop(j, mega - 1) ans = "mega " + ans;
        cout << (mega == 0 ? "no drought" : ans) << endl << endl;
    }
    return 0;
}