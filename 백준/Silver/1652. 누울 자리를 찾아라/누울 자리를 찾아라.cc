#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int N; cin >> N;
    char arr[100][100];
    loop(i, N){
        string tmp; cin >> tmp;
        loop(j, N) arr[i][j] = tmp[j];
    }
    int r = 0, c = 0;
    loop(i, N){
        int cnt_r = 0, cnt_c = 0;
        loop(j, N) {
            if (arr[i][j] == '.') cnt_r++;
            else {
                if (cnt_r >= 2) r++;
                cnt_r = 0;
            }
            if(arr[j][i] == '.') cnt_c++;
            else {
                if(cnt_c >= 2) c++;
                cnt_c = 0;
            }
        }
        if(cnt_r >= 2) r++;
        if(cnt_c >= 2) c++;
    }
    cout << r << " " << c;
    return 0;
}

