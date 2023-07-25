#include <iostream>
#include <algorithm>
#include <cmath>
#include <tuple>
#include <vector>
using namespace std;
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main() {
    fastio;
    int sz, curr, prev;
    bool up = false, down = false;
    while(true){
    	cin >> sz;
    	if(sz == 0) break;
    	int upDown = 0;
    	for(int n = 0 ; n < sz ; n++){
    		cin >> curr;
    		if(n != 0){
    			if(prev < curr && n != 0){
    				up = true;
				}
				else if (prev > curr){
					down = true;
					if(up && down){
						upDown++;
						up = down = false;
					}
				}
			}
    		prev = curr;
		}
		cout << upDown << endl;
	}
    return 0;
}