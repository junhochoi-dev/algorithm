#include <iostream> 
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int E, S, M, num = 1;
    cin >> E >> S >> M;
    if(E == 1 && S == 1 && M == 1) cout << 1 << endl;
    else{
        while(true){
            if(num % 15 == (E - 1) && num % 28 == (S - 1) && num % 19 == (M - 1)){
                cout << num + 1 << endl;
                break;
            }
            num++;
        }
    }
    return 0;
}