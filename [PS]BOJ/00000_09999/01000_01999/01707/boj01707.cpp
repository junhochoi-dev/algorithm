#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
#define endl '\n'
#define WHITE 0
#define RED 1
#define BLUE 2
bool visited[20001];
int color[20001];
vector<int> graph[20001];
int N, M;

void init(int vertex){
    for(int n = 1 ; n <= vertex ; n++) {
        visited[n] = false;
        color[n] = WHITE;
        graph[n].clear();
        // 0 no color ; 1 group1 ; 2 group2
    }
}

void BFS(int start){
    visited[start] = true;
    color[start] = RED;
    queue<int> que;
    que.push(start);
    while(!que.empty()){
        int curr = que.front();
        int curr_color = color[curr];
        que.pop();
        
        for(int n = 0 ; n < graph[curr].size() ; n++){
            int next = graph[curr][n];
            int next_color = color[next];
            if(visited[next]) continue;
            if(next_color == 0){
                if(curr_color == RED) color[next] = BLUE;
                else if(curr_color == BLUE) color[next] = RED;
                visited[next] = true;
                que.push(next);
            }
        }
    }
}

bool colorCheck(int vertex){
    for(int n = 1 ; n <= vertex ; n++){
    	for(int m = 0 ; m < graph[n].size() ; m++){
    		if(color[n] == color[graph[n][m]]) return false;
		}
	}
	return true;
}

void show(int vertex){
	for(int n = 1; n <= vertex ; n++) {
		cout << "root [" << n << "] ";
		for(int m = 0 ; m < graph[n].size() ; m++){
			cout << graph[n][m] << ' ';
		}
		cout << endl;
	}
	cout << endl;
	for(int n = 1; n <= vertex ; n++) cout << color[n] << ' ';
	cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc, vertex, edge, from, to;
    cin >> tc;
    while(tc--){
        cin >> vertex >> edge;
        init(vertex);
        for(int n = 0 ; n < edge ; n++){
            cin >> from >> to;
            graph[from].push_back(to);
            graph[to].push_back(from);
        }
        for(int n = 1 ; n <= vertex ; n++){
            if(!visited[n]) BFS(n);
        }
        
    	if(colorCheck(vertex)) cout << "YES" << endl;
    	else cout << "NO" << endl;
    	//show(vertex);
    }
    
    return 0;
}
