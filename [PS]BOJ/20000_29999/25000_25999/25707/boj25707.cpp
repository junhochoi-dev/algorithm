#include <iostream>
#include <algorithm>

#include <cmath>
#include <vector>

using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    int N, gap = 0;
    cin >> N;
    vector<int> vc(N);
    for(int n = 0 ; n < N ; n++) cin >> vc[n];
    sort(vc.begin(), vc.end());
    for(int n = 0 ; n < N - 1 ; n++) gap += vc[n + 1] - vc[n];
    gap += vc[N - 1] - vc[0];
    cout << gap << endl;
    return 0;
}