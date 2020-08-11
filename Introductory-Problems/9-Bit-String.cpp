#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

typedef long long ll;

ll power(ll n) {
    if (n == 0) {
        return 1;
    }
    ll p = power(n / 2) % mod;
    if (n & 1) {
        return (((p * p) % mod) * 2) % mod;
    }
    else {
        return (p * p) % mod;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    cout << power(n);
    return 0;
}