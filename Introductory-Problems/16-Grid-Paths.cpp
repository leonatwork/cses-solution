#include <bits/stdc++.h>
using namespace std;

string s;
bool vis[7][7];
int ans;

bool isValid(int i, int j)
{
    return i >= 0 && j >= 0 && i < 7 && j < 7 && !vis[i][j];
}

void dfs(int i, int j, int a = 0)
{
    if (i == 6 && j == 0)
    {
        if (a == 48)
        {
            ans++;
        }
        return;
    }
    vis[i][j] = 1;
    if (s[a] == '?' || s[a] == 'L')
    {
        if (j && !vis[i][j - 1])
        {
            if (!(!isValid(i, j - 2) && isValid(i + 1, j - 1) && isValid(i - 1, j - 1)))
                dfs(i, j - 1, a + 1);
        }
    }
    if (s[a] == '?' || s[a] == 'R')
    {
        if (j < 6 && !vis[i][j + 1])
        {
            if (!(!isValid(i, j + 2) && isValid(i + 1, j + 1) && isValid(i - 1, j + 1)))
                dfs(i, j + 1, a + 1);
        }
    }
    if (s[a] == '?' || s[a] == 'U')
    {
        if (i && !vis[i - 1][j])
        {
            if (!(!isValid(i - 2, j) && isValid(i - 1, j - 1) && isValid(i - 1, j + 1)))
                dfs(i - 1, j, a + 1);
        }
    }
    if (s[a] == '?' || s[a] == 'D')
    {
        if (i < 6 && !vis[i + 1][j])
        {
            if (!(!isValid(i + 2, j) && isValid(i + 1, j - 1) && isValid(i + 1, j + 1)))
                dfs(i + 1, j, a + 1);
        }
    }
    vis[i][j] = 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    dfs(0, 0);
    cout << ans;
    return 0;
}