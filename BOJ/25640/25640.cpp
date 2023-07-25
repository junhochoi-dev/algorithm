#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    string mbti, others;
    int tc, cnt = 0;
    cin >> mbti >> tc;
    while(tc--){
        cin >> others;
        if(others == mbti) cnt++;
    }
    cout << cnt << endl;
    return 0;
}