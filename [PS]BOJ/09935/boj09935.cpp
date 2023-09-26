#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str, bomb, temp = "";
    cin >> str >> bomb;
    for(int n = 0 ; n < str.size() ; n++){
        temp += str[n];
        if(str[n] == bomb[bomb.size() - 1] && temp.size() >= bomb.size()){
        	if(temp.substr(temp.size() - bomb.size(), bomb.size()) == bomb){
        		for(int m = 0 ; m < bomb.size() ; m++){
        			temp.pop_back();
        		}
        	}
        }
    }
    cout << (temp.size() == 0 ? "FRULA" : temp) << endl;
    return 0;
}