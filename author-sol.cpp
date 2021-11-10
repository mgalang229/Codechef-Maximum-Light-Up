#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long p, a, b, c, x, y;
		cin >> p >> a >> b >> c >> x >> y;
		// calculate the cost of each one (1)
		long long anar = b + (x * a);
		long long chakri = c + (y * a);
		// to get the maximum, it is enough to choose only one (1) type
		cout << p / min(anar, chakri) << '\n';
	}
	return 0;
}
