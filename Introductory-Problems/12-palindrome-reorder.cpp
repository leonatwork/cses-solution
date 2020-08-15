#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    vector<int> a(26);
    for (char c : s)
        a[c - 'A']++;
    int odd = 0, oddChar = -1;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] & 1)
        {
            odd++;
            oddChar = i;
        }
        if (odd > 1)
        {
            cout << "NO SOLUTION";
            return 0;
        }
    }
    string t;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] > 0)
        {
            int x = a[i] / 2;
            while (x--)
            {
                t.push_back(char(i + 'A'));
            }
        }
    }
    cout << t;
    if (oddChar != -1)
        cout << char(oddChar + 'A');
    for (int i = t.length() - 1; i >= 0; i--)
    {
        cout << t[i];
    }
    return 0;
}