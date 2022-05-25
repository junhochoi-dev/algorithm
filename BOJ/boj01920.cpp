#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> vt;
void binary_search(int num){
    int left = 0, right = vt.size() - 1, mid;
    while(left <= right){
        mid = (left + right) / 2;
        if(vt[mid] > num)
            right = mid - 1;
        else if(vt[mid] < num)
            left = mid + 1;
        else{
            cout << 1 << '\n';
            return;
        }
    }
    cout << 0 << '\n';
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, value;
    cin >> N;
    for(int n = 0 ; n < N ; n++){
        cin >> value;
        vt.push_back(value);
    }
    sort(vt.begin(), vt.end());
    cin >> M;
    for(int n = 0 ; n < M ; n++){
        cin >> value;
        binary_search(value);
    }
	return 0;
}