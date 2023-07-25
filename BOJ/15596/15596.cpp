#include <vector>
long long sum(std::vector<int> &a) {
	long long ans = 0;
    for (int n = 0; n < a.size(); n++)
		ans += a.at(n);
	return ans;
}
