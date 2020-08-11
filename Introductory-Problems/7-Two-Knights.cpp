#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	for (ll i = 1; i <= n; i++) {
		ll a, c;
		c = i * i;
		a = c * c;
		cout << (a - (9 * c) + (24 * i) - 16) / 2 << "\n";
	}
	return 0;
}