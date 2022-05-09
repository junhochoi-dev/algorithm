#include <iostream>
#include <algorithm>
#include <string>
#include <deque>
using namespace std;
deque<int> parsing(string str){
    int idx;
    string tmp = "";
    deque<int> dq;
    if(str.size() != 0){
        for(int n = 0 ; n < str.size() ; n++){
            if(isdigit(str[n])){
                tmp += str[n];
            }
            else{
                if(!tmp.empty()){
                    dq.push_back(stoi(tmp));
                    tmp = "";
                }
            }
        }
    }
    return dq;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int size, num_size, front, back, reverse_cnt;
    string order, num_str;
    deque<int> arr;
    cin >> size;
    for(int n = 0 ; n < size ; n++){
        bool error = false;
        cin >> order >> num_size >> num_str;
        arr = parsing(num_str);
        // optimize order
        reverse_cnt = front = back = 0;
        for(int m = 0 ; m < order.size() ; m++){
            if(order[m] == 'R') reverse_cnt++;
            if(order[m] == 'D'){
                if(reverse_cnt % 2 == 0) front++;
                else back++;
            }
        }
        // do order
        for(int m = 0 ; m < front ; m++){
            if(arr.size() != 0) arr.pop_front();
            else error = true;
        }
        for(int m = 0 ; m < back ; m++){
            if(arr.size() != 0) arr.pop_back();
            else error = true;
        }
        if(reverse_cnt % 2 != 0) reverse(arr.begin(), arr.end());
        //print
        if(error) cout << "error" << '\n';
        else{
            cout << "[";
            for(int m = 0 ; m < arr.size() ; m++){
                cout << arr[m];
                if(m != arr.size() - 1) cout << ",";
            }
            cout << "]" << '\n';
        }
    }
	return 0;
}