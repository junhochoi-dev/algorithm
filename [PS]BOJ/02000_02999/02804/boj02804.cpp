#include <iostream>
using namespace std;
int main(){
    string A, B;
    int index_A, index_B, cnt = 0;
    cin >> A >> B;
    for(int n = 0; n < A.size(); n++){
        for(int m = 0 ; m < B.size(); m++){
            if(A[n] == B[m]){
                index_A = n;
                index_B = m;
                goto space;
            }
        }
    }
    space:
    for(int n = 0; n < B.size(); n++){
        if(n == index_B){
            cout << A << endl;
            cnt++;
            continue;
        }
        else{
            for(int m = 0; m < A.size(); m++){
            if(m == index_A)
                cout << B[cnt++];
            else
                cout << '.';
            }
        }
        cout << endl;
    }
    
    return 0;
}