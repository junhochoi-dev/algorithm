#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int sz, start, end;
    cin >> sz;
	vector<pair<int, int> > lines, vec;
    while(sz--){
    	cin >> start >> end;
    	lines.push_back(make_pair(start, end));
	}
	sort(lines.begin(), lines.end());
	sz = lines.size();
	for(int k = 0 ; k < lines.size() ; k++){
		start = lines[k].first;
		end = lines[k].second;
    	bool lineCheck = false;
    	for(int n = 0 ; n < vec.size() ; n++){
    		int std_s = vec[n].first;
    		int std_e = vec[n].second;
    		if((std_s <= start && start <= std_e) || (std_s <= end && end <= std_e)){
    			if(std_s <= start && start <= std_e && std_e < end){
    				vec[n].second = end;
				}
				else if(std_s <= end && end <= std_e && start < std_s){
    				vec[n].first = start;
				}
				else if(start <= std_s && std_e <= end){
					vec[n].first = start;
					vec[n].second = end;
				}
				lineCheck = true;
    			break;
			}
		}
		if(!lineCheck) vec.push_back(make_pair(start, end));
	}
	int sum = 0;
	for(int n = 0 ; n < vec.size() ; n++) sum += vec[n].second - vec[n].first;
	cout << sum << endl;
    return 0;
}