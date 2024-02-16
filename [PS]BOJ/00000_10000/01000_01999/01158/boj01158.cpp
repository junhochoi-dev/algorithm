#include <iostream>
#include <vector>
#include <queue>
#define endl '\n'
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> josephus;
    queue<int> que;
    int size, idx;
    cin >> size >> idx;
    for(int n = 0 ; n < size ; n++) { que.push(n + 1); }
    while(!que.empty()){
        for(int n = 0 ; n < idx - 1; n++){
            int tmp = que.front();
            que.push(tmp);
            que.pop();
        }
        josephus.push_back(que.front());
        que.pop();
    }
    cout << '<';
    for(int n = 0 ; n < josephus.size() ; n++){
        if(n != 0) cout << ", ";
        cout << josephus[n];
    }
    cout << '>';
    return 0;
}