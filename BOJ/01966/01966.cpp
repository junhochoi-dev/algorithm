#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> vt;
    int tc, sz, idx, val, order;
    cin >> tc;
    while(tc--){
    	order = 0;
        cin >> sz >> idx;
        for(int n = 0 ; n < sz ; n++){
            cin >> val;
            vt.push_back(val);
        }
        while(idx != -1){
            if(vt[0] == *max_element(vt.begin(), vt.end())){ // out
                order++; // outorder
                idx--;
                vt.erase(vt.begin());
            }
            else{ // rotate
            	if(idx == 0) idx = vt.size() - 1;
                else idx--;
                vt.push_back(vt[0]);
                vt.erase(vt.begin());
            }
        }
    	cout << order << endl;
    	vt.clear();
    }
    return 0;
}