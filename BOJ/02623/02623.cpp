#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int inDegree[1001];
vector<int> node[1001], ans;
int main() {
    fastio;
    int sz_node, sz_std, sz;
    cin >> sz_node >> sz_std;
    for(int n = 1 ; n <= sz_node ; n++){
    	inDegree[n] = 0;
	}
	for(int n = 0 ; n < sz_std ; n++){
		cin >> sz;
		int prev = -1, curr;
		for(int m = 0 ; m < sz ; m++){
			cin >> curr;
			if(prev != -1){
				node[prev].push_back(curr);
				inDegree[curr]++;
			}
			prev = curr;
		}
	}
	queue<int> que;
	for(int n = 1 ; n <= sz_node ; n++){
		if(inDegree[n] == 0) que.push(n);
		//cout << inDegree[n] << ' ';
	}
	//cout << endl;
	bool cycleCheck = false;
	for(int n = 0 ; n < sz_node ; n++){
		if(que.empty()){
			cycleCheck = true;
			break;
		}
		int idx = que.front();
		que.pop();
		ans.push_back(idx);
		for(int m = 0 ; m < node[idx].size() ; m++){
			if(--inDegree[node[idx][m]] == 0) que.push(node[idx][m]);
		}
	}
	if(cycleCheck) cout << 0 << endl;
	else for(int n = 0 ; n < ans.size() ; n++) cout << ans[n] << endl;
	return 0;
}