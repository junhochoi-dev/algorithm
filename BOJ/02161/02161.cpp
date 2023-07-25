#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    queue<int> que, trash;
    cin >> N;
    if(N == 1){
    	cout << 1 << endl;
	}
	else{
		for(int n = 1 ; n <= N ; n++) que.push(n);
	    while(true){
	    	trash.push(que.front());
	    	que.pop();
	    	que.push(que.front());
	    	que.pop();
	    	if(que.size() == 1) break;
		}
		while(!trash.empty()){
			cout << trash.front() << ' ';
			trash.pop();
		}
		cout << que.front() << endl;
	}
    return 0;
}