#include <iostream>
#include <stack>
using namespace std;
int main() {
    int size, *arr, *ans;
    cin >> size;
    arr = new int[size];
    ans = new int[size];
    for(int n = 0 ; n < size ; n++) cin >> arr[n];
    stack<int> st;
    for(int n = size - 1 ; n >= 0 ; n--){
        if(st.empty()) {
            ans[n] = -1;
            st.push(arr[n]);
        }
        else{
            while(true){
                if(st.empty()){
                    ans[n] = -1;
                    st.push(arr[n]);
                    break;
                }
                else if(arr[n] < st.top()){
                    ans[n] = st.top();
                    st.push(arr[n]);
                    break;
                }
                else st.pop();
            }
        }
    }
    for(int n = 0 ; n < size ; n++) cout << ans[n] << ' ';
    cout << endl;
    return 0;
}