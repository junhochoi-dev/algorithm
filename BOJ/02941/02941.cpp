#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    cin >> a;
    int cnt=0;
    for(int i=0;i<a.size();i++) {
        if(a[i]=='c'){
            if(a[i+1]=='='||a[i+1]=='-') {
                i++;
            }
        }
        else if(a[i]=='d'){
            if(a[i+1]=='z'&&a[i+2]=='=') {
                i=i+2;
            }
            else if(a[i+1]=='-') {
                i++;
            }
        }
        else if((a[i]=='l'||a[i]=='n')&&a[i+1]=='j'){i++;}
        else if((a[i]=='s'||a[i]=='z')&&a[i+1]=='='){i++;}
        cnt++;
    }
    cout<< cnt;
}