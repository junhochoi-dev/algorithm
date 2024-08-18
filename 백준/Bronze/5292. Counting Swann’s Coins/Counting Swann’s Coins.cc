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
        int num = i + 1;
        if(num % 3 == 0 && num % 5 == 0) cout << "DeadMan" << endl;
        else if(num % 3 == 0) cout << "Dead" << endl;
        else if(num % 5 == 0) cout << "Man" << endl;
        else cout << num << " ";
    }
    return 0;
}
