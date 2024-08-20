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
        int num, plus; cin >> num >> plus;
        string temp_num = to_string(num);
        string temp_plus = to_string(plus);
        reverse(temp_num.begin(), temp_num.end());
        reverse(temp_plus.begin(), temp_plus.end());
        temp_num = to_string(stoi(temp_num) + stoi(temp_plus));
        reverse(temp_num.begin(), temp_num.end());
        cout << stoi(temp_num) << endl;
    }
    return 0;
}