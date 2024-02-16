#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// freopen("input.txt", "r", stdin);
	int test_case, *classroom;
	unsigned long long sum = 0;
	int mainSupervisor, subSupervisor;
	cin >> test_case;
	classroom = new int[test_case];
	for(int n = 0 ; n < test_case ; n++) cin >> classroom[n];
	cin >> mainSupervisor >> subSupervisor;
	for(int n = 0 ; n < test_case ; n++) {
		int remainder = classroom[n] - mainSupervisor;
		sum++;
		if(remainder <= 0) continue;
		// mainSupervisor < classroom[n]
		sum += remainder / subSupervisor;
		if(remainder % subSupervisor > 0) sum++;
	}
	cout << sum << endl;
    return 0;
}