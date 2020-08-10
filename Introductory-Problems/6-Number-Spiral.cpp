#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		ll x, y;
		cin >> x >> y;
		ll m = max(x, y) - 1;
		m *= m;
		ll ans;
		if (x < y) {
			if (y & 1) {
				ans = m + 2 * y - x;
			} else {
				ans = m + x;
			}
		} else {
			if (x & 1) {
				ans = m + y;
			} else {
				ans = m + 2 * x - y;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
