#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> wt(n);
    ll tot = 0;
    for (ll &i : wt)
    {
        cin >> i;
        tot += i;
    }
    ll mindiff = LLONG_MAX;
    for (ll i = 0; i < (1 << n); i++)
    {
        int x = i;
        ll cur = 0;
        int k = 0;
        while ((x >> k) && k < n)
        {
            if ((x >> k) & 1)
            {
                cur += wt[k];
            }
            k++;
        }
        mindiff = min(mindiff, abs(tot - 2 * cur));
    }
    cout << mindiff;
    return 0;
}