#include <iostream>

using namespace std;
int Break_Even_Point(int a, int b, int c){
    int i = 1;
    if(c<=b) {return -1;}
    while(true) {
        if (i > a / (c-b)) {
            return i;
        }
        i++;
    }
}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<Break_Even_Point(a,b,c);
}

