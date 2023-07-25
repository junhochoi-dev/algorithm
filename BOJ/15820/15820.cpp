#include <iostream>
using namespace std;
int main(){
    int answer, input;
    bool status_sample = true;
    bool status_system = true;
    int test_sample, test_system;
    cin >> test_sample >> test_system;
    for(int n = 0; n < test_sample; n++){
        cin >> answer >> input;
        if(answer != input) {status_sample = false;}
    }
      for(int n = 0; n < test_system; n++){
        cin >> answer >> input;
        if(answer != input) {status_system = false;}
    }
    if(status_sample && status_system)
        cout << "Accepted" << endl;
    else if(status_sample == true && status_system == false)
        cout << "Why Wrong!!!" << endl;
    else
        cout << "Wrong Answer" << endl;
    return 0;
}