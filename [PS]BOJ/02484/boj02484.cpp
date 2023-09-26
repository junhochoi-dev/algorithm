#include <iostream>
#include <algorithm>
using namespace std;
vector<int> person;
int main() {
    int arr[4];
    int size, sum;
    cin >> size;
    for(int n = 0 ; n < size ; n++){
        sum = 0;
        for(int m = 0 ; m < 4 ; m++){
            cin >> arr[m];
        }
        sort(arr, arr + 4);
        if(arr[0] == arr[3]) sum += 50000 + arr[0] * 5000;
        else if(arr[0] == arr[1] && arr[1] == arr[2] && arr[0] == arr[2]) sum += 10000 + arr[0] * 1000;
        else if(arr[1] == arr[2] && arr[2] == arr[3] && arr[1] == arr[3]) sum += 10000 + arr[3] * 1000;
        else if(arr[0] == arr[1] && arr[2] == arr[3]) sum += 2000 + 500 * (arr[0] + arr[3]);
        else if(arr[0] == arr[1]) sum += 1000 + arr[0] * 100;
        else if(arr[1] == arr[2]) sum += 1000 + arr[1] * 100;
        else if(arr[2] == arr[3]) sum += 1000 + arr[2] * 100;
        else sum += arr[3] * 100;
        person.push_back(sum);
    }
    sort(person.begin(), person.end());
    cout << person[person.size() - 1] << endl;
    return 0;
}