#include<bits/stdc++.h>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	char prev, cur;
	cin >> prev;
	int len = 1, maxlen = 1;
	while (cin >> cur) {
		if (prev == cur) {
			len++;
		} else {
			len = 1;
		}
		maxlen = max(maxlen, len);
		prev = cur;
	}
	cout << maxlen;
	return 0;
}
