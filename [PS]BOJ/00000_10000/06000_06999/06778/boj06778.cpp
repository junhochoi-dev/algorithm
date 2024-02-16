#include <iostream>
#include <algorithm>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(k,n) for(int k = 0; k < n; k++)
#define endl '\n'

int main() {
    fastio
    int antena, eyes;
    cin >> antena >> eyes;
    if(antena >= 3 && eyes <= 4) cout << "TroyMartian" << endl;
    if(antena <= 6 && eyes >= 2) cout << "VladSaturnian" << endl;
    if(antena <= 2 && eyes <= 3) cout << "GraemeMercurian" << endl;
    return 0;
}