#include <iostream>
#include <queue>
#define fo(N) for(int n = 0 ; n < N ; n++)
using namespace std;
int main() {
    queue<int> que;
    int cnt;
    cin >> cnt;
    fo(cnt) { que.push(n + 1); }
    while(que.size() != 1){
        que.pop();
        que.push(que.front());
        que.pop();
    }
    cout << que.front() << endl;
	return 0;
}