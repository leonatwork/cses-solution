#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll p = 0;
    while (n > 0)
    {
        p += (n / 5);
        n /= 5;
    }
    cout << p;
    return 0;
}