#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
#define endl '\n'
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
char table[12][6];
bool visitedCnt[12][6];
bool visitedBomb[12][6];

void initCnt(){
	for(int n = 0 ; n < 12 ; n++){
		for(int m = 0 ; m < 6 ; m++){
			visitedCnt[n][m] = false;
		}
	}
}
void initBomb(){
	for(int n = 0 ; n < 12 ; n++){
		for(int m = 0 ; m < 6 ; m++){
			visitedBomb[n][m] = false;
		}
	}
}

void bomb(){
	for(int n = 0 ; n < 12 ; n++){
		for(int m = 0 ; m < 6 ; m++){
			if(table[n][m] == '#') table[n][m] = '.';
		}
	}
}

void fallDown(){
	for(int n = 0 ; n < 12 - 1; n++){
		for(int m = 0 ; m < 6 ; m++){
			if(table[n][m] != '.' && table[n + 1][m] == '.'){
				for(int k = n + 1 ; k >= 1 ; k--){
					table[k][m] = table[k - 1][m];
				}
				table[0][m] = '.';
			}
		}
	}
}
int DFScnt(int row, int column){
	int sum = 1;
	visitedCnt[row][column] = true;
	for(int k = 0 ; k < 4 ; k++){
		int tr = row + dy[k];
		int tc = column + dx[k];
		if(tr < 0 || tc < 0 || tr >= 12 || tc >= 6) continue; // out of range
		if(visitedCnt[tr][tc]) continue; // visited check
		if(table[row][column] != table[tr][tc]) continue; // different color
		sum += DFScnt(tr, tc);
	}
	return sum;
}

void DFSBomb(int row, int column, char color){
	visitedBomb[row][column] = true;
	table[row][column] = '#';
	for(int k = 0 ; k < 4 ; k++){
		int tr = row + dy[k];
		int tc = column + dx[k];
		if(tr < 0 || tc < 0 || tr >= 12 || tc >= 6) continue; // out of range
		if(visitedBomb[tr][tc]) continue; // visited check
		if(color != table[tr][tc]) continue; // different color
		DFSBomb(tr, tc, color);
	}
}

void show(){
	for(int n = 0 ; n < 12 ; n++){
		for(int m = 0 ; m < 6 ; m++){
			cout << table[n][m];
		}
		cout << endl;
	}
	cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    for(int n = 0 ; n < 12 ; n++){
    	for(int m = 0 ; m < 6 ; m++){
    		cin >> table[n][m];
		}
	}
	
	int puyoPang = 0;
	bool puyoCheck = true;
	while(puyoCheck){
		fallDown();
		puyoCheck = false;
		initCnt();
		for(int n = 0 ; n < 12 ; n++){
	    	for(int m = 0 ; m < 6 ; m++){
	    		if(!visitedCnt[n][m] && table[n][m] != '.' && table[n][m] != '#') {
	    			int cnt = DFScnt(n, m);
	    			if(cnt >= 4){
	    				initBomb();
	    				DFSBomb(n, m, table[n][m]);
	    				puyoCheck = true;
					}
				}
			}
		}
		if(!puyoCheck) break;
		else{
			bomb();
	    	puyoPang++;
		}
	}
	cout << puyoPang << endl;
    return 0;
}
