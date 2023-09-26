#include <iostream>
#include <algorithm>
#define endl '\n'
using namespace std;
int N, SIZE;
long long *arr;
bool possible(long long cut){
    int cnt = 0;
    for(int n = 0 ; n < SIZE ; n++) cnt += arr[n] / cut;
    if(cnt >= N) return true;
    return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> SIZE >> N;
    arr = new long long[SIZE];
    long long right = 0, left = 1, ans = 0;
    for(int n = 0 ; n < SIZE ; n++) {
        cin >> arr[n];
        right = max(right, arr[n]);
    }
    while(left <= right){
        long long mid = (left + right) / 2;
        if(possible(mid)){
            ans = max(ans, mid);
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    cout << ans << endl;
    return 0;
}