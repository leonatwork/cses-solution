#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<string> vs;
    int k = 0;
    do
    {
        vs.push_back(s);
        k++;
    } while (next_permutation(s.begin(), s.end()));
    cout << k << "\n";
    for (auto i : vs)
    {
        cout << i << "\n";
    }
    return 0;
}