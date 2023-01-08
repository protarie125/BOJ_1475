#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	cin >> s;

	auto v = vector<int>(9, 0);

	for (const auto& x : s) {
		if ('6' == x || '9' == x) {
			v[6] += 1;
		}
		else {
			const auto& idx = x - '0';
			v[idx] += 1;
		}
	}

	v[6] = (v[6] / 2) + (v[6] % 2);

	cout << *max_element(v.begin(), v.end());

	return 0;
}