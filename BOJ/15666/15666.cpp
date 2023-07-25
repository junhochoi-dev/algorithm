#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define endl '\n'

bool visited[8];
int result[8];
int N, M, val;
vector<int> vt;
void backtracking(int cnt){
    if(cnt == M) {
        for(int n = 0 ; n < M ; n++){
            cout << result[n] << ' ';
        }
        cout << endl;
        return;
    }
    
    int next = 0;
    for(int n = 0 ; n < vt.size() ; n++){
        if(next != vt[n]){
            if(cnt > 0 && result[cnt - 1] > vt[n]) continue;
            // visited check
            //visited[n] = true;
            
            result[cnt] = vt[n];
            
            // repeated sequence check
            next = vt[n];
            backtracking(cnt + 1);
            
            //visited[n] = false;
        }
    }
    
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// freopen("input.txt", "r", stdin);
	
	cin >> N >> M;
	for(int n = 0; n < N; n++){
	    cin >> val;
	    vt.push_back(val);
	}
	sort(vt.begin(), vt.end());
	backtracking(0);
    return 0;
}