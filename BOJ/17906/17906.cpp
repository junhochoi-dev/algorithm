#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <utility>
using namespace std;
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long fish_cnt, seller, weight, sell_cnt, mpw;
    cin >> fish_cnt >> seller;
    vector<long long> fish_weight;
    vector<pair<long long, long long>> sell_list;
    for(int n = 0 ; n < fish_cnt ; n++){
    	cin >> weight;
    	fish_weight.push_back(-weight);
	}
	sort(fish_weight.begin(), fish_weight.end());
	for(int n = 0 ; n < seller ; n++){
		cin >> sell_cnt >> mpw;
		sell_list.push_back({-mpw, sell_cnt});
	}
	sort(sell_list.begin(), sell_list.end());
	long long sum = 0;
	for(int n = 0, m = 0 ; n < fish_cnt, m < seller ; m++){
		for(int k = 0 ; k < sell_list[m].second ; k++){
			if(n >= fish_cnt) break;
			sum += fish_weight[n++] * sell_list[m].first;
		}
	}
	cout << sum << endl;
    return 0;
}
