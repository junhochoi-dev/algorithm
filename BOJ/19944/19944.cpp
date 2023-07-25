#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    if(M == 1 || M == 2) cout << "NEWBIE!" << endl;
    else if (M <= N) cout << "OLDBIE!" << endl;
    else cout << "TLE!" << endl;
    return 0;
}