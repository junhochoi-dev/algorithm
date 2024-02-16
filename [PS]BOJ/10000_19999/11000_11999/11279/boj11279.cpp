#include <iostream>
#include <queue>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	priority_queue<int> pq;
	int size, val;
	cin >> size;
	for(int n = 0 ; n < size; n++){
		cin >> val;
		if(val == 0){
			if(pq.empty()){
				cout << 0 << '\n';
			}
			else{
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
		else{
			pq.push(val);
		}
	}
	return 0;
}