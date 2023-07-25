#include <iostream>
#include <utility>
#include <string>
using namespace std;
typedef pair<int, string> is;
int main() {
	int size, start, end, cnt;
	cin >> size;
	is db[25];
	db[0] = make_pair(1967, "DavidBowie");
	db[1] = make_pair(1969, "SpaceOddity");
	db[2] = make_pair(1970, "TheManWhoSoldTheWorld");
	db[3] = make_pair(1971, "HunkyDory");
	db[4] = make_pair(1972, "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars");
	db[5] = make_pair(1973, "AladdinSane");
	db[6] = make_pair(1973, "PinUps");
	db[7] = make_pair(1974, "DiamondDogs");
	db[8] = make_pair(1975, "YoungAmericans");
	db[9] = make_pair(1976, "StationToStation");
	db[10] = make_pair(1977, "Low");
	db[11] = make_pair(1977, "Heroes");
	db[12] = make_pair(1979, "Lodger");
	db[13] = make_pair(1980, "ScaryMonstersAndSuperCreeps");
	db[14] = make_pair(1983, "LetsDance");
	db[15] = make_pair(1984, "Tonight");
	db[16] = make_pair(1987, "NeverLetMeDown");
	db[17] = make_pair(1993, "BlackTieWhiteNoise");
	db[18] = make_pair(1995, "1.Outside");
	db[19] = make_pair(1997, "Earthling");
	db[20] = make_pair(1999, "Hours");
	db[21] = make_pair(2002, "Heathen");
	db[22] = make_pair(2003, "Reality");
	db[23] = make_pair(2013, "TheNextDay");
	db[24] = make_pair(2016, "BlackStar");
	for (int n = 0; n < size; n++) {
		cin >> start >> end;
		cnt = 0;
		for (int i = start; i <= end; i++) {
			for (int m = 0; m < 25; m++) {
				if (db[m].first == i)
					cnt++;
			}
		}
		cout << cnt << endl;
		for (int i = start; i <= end; i++) {
			for (int m = 0; m < 25; m++) {
				if (db[m].first == i)
					cout << i << ' ' << db[m].second << endl;
			}
		}
	}

	return 0;
}