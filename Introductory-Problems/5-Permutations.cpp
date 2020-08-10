#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	if (n > 1 && n < 4) {
		cout << "NO SOLUTION";
	} else {
		vector<int> a(n);
		int k = 1;
		for (int i = 1; i < n; i += 2) {
			a[i] = k;
			k++;
		}
		for (int i = 0; i < n; i += 2) {
			a[i] = k;
			k++;
		}
		for (int i : a) {
			cout << i << " ";
		}
	}
	return 0;
}
