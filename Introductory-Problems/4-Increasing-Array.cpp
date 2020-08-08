#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ll ans = 0;
	for (int i = 1; i < n; i++) {
		if (a[i] < a[i - 1]) {
			ans += a[i - 1] - a[i];
			a[i] = a[i - 1];
		}
	}
	cout << ans;
	return 0;
}
