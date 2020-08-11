#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll sum = n * (n + 1) / 2;
    if (sum & 1) {
        cout << "NO";
    }
    else {
        cout << "YES\n";
        ll s = sum / 2;
        bitset < 1000005 > bs;
        ll curSum = 0;
        int size = 0;
        for (int i = n; i >= 1; i--) {
            if (bs[i] == 0 && curSum + i <= s) {
                bs[i] = 1;
                curSum += i;
                size++;
            }
            if (curSum == s) {
                break;
            }
        }
        cout << size << "\n";
        for (int i = 1; i <= n; i++) {
            if (bs[i] == 1) {
                cout << i << " ";
            }
        }
        cout << "\n" << n - size << "\n";
        for (int i = 1; i <= n; i++) {
            if (bs[i] == 0) {
                cout << i << " ";
            }
        }
    }
    return 0;
}