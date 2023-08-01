#include <iostream>
#define endl '\n'

#define MAX 1000001

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool arr[MAX] = {false, };
    int start, end;
    arr[0] = arr[1] = true;
    cin >> start >> end;
    
    for(int n = 2 ; n < MAX ; n++){
        for(int m = 2 ; n * m < MAX ; m++){
            arr[n * m] = true;
        }
    }
    
    for(int n = start ; n <= end ; n++) if(!arr[n]) cout << n << endl;
    return 0;
}