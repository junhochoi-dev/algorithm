#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k, sz) for(int k = 0; k < sz; k++)
#define ll long long
#define endl '\n'

int main() {
    fastio
    int num;
    vector<int> arr;
    while(cin >> num && num != 0) arr.push_back(num);
    loop(i, arr.size()){
        int sum = 0;
        loop(j, arr[i]){
            if(j == 0) continue;
            if(arr[i] % j == 0) sum += j;
        }
        cout << arr[i] << " ";
        if(sum < arr[i]) cout << "DEFICIENT" << endl;
        else if(sum > arr[i]) cout << "ABUNDANT" << endl;
        else cout << "PERFECT" << endl;
    }
    return 0;
}