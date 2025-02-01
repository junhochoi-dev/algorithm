#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

#define SIZE 401

int main() {
    fastio
    int N, ans = 0, score[3];
    loop(i, 3) cin >> score[i];
    cin >> N;
    while(N--){
        int sum = 0;
        loop(i, 3){
            int skill[3];
            loop(j, 3){
                cin >> skill[j];
                sum += skill[j] * score[j];
            }
        }
        ans = max(ans, sum);
    }
    cout << ans;
    return 0;
}