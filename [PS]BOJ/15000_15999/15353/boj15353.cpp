#include <iostream>
#include <string>
using namespace std;
int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
	int tmp = 0, idx;
    string n1, n2;
    cin >> n1 >> n2;
    if(n1.size() < n2.size()) swap(n1, n2);
    for(int n = n1.size() - 1, m = n2.size() - 1; m >= 0; n--, m--){
    	if(n1[n] + n2[m] + tmp >= 106){
    		n1[n] = (n1[n] + n2[m] - 96 + tmp) % 10 + '0';
    		tmp = 1;
    	}
    	else {
    		n1[n] += + n2[m] - '0' + tmp;
    		tmp = 0;
    	}
    }
    idx = n1.size() - n2.size();
    for(int n = idx - 1; n >= 0 ; n--){
    	if(n1[n] - '0' + tmp >= 10){
    		n1[n] = (n1[n] - '0' + tmp) % 10 + '0';
    		tmp = 1;
    	}
    	else {
    		n1[n] += tmp;
    		tmp = 0;
    		break;
    	}
    }
    if(tmp == 1)
        cout << 1;
    cout << n1 << '\n';
    return 0;
}