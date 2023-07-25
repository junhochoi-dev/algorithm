#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

int main() {
    fastio;
    int N, arr[3];
    cin >> N;
    cout << "Gnomes:" << endl;
    while(N--){
        for(int n = 0 ; n < 3 ; n++) cin >> arr[n];
        if(arr[0] > arr[1] && arr[1] > arr[2]) cout << "Ordered" << endl;
        else if(arr[0] < arr[1] && arr[1] < arr[2]) cout << "Ordered" << endl;
        else cout << "Unordered" << endl;
    }
    return 0;
}