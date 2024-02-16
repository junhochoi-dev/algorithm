#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int size, target, ring, tmp, min_ring;
	cin >> size >> target;
	for(int n = 0 ; n < size - 1 ; n++){
		tmp = target;
		cin >> ring;
		min_ring = min(target, ring);
		while(true){
			for(int m = 2 ; m <= min_ring ; m++){
				if(tmp % m == 0 && ring % m == 0){
					tmp /= m;
					ring /= m;
					break;
				}
				if(m == min_ring){
					goto space;
				}
			}
		}
		space:
		cout << tmp << '/' << ring << endl;
	}
	return 0;
}