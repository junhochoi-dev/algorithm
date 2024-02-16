#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;
#define endl '\n'

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// freopen("input.txt", "r", stdin);
	string KDA;
	cin >> KDA;
	int front = KDA.find("/");
	int end = KDA.rfind("/");
	int K = stoi(KDA.substr(0, front));
	int D = stoi(KDA.substr(front + 1, end - front));
	int A = stoi(KDA.substr(end + 1, KDA.size() - end - 1));
	if(K + A < D || D == 0) cout << "hasu" << endl;
	else cout << "gosu" << endl;
	return 0;
}