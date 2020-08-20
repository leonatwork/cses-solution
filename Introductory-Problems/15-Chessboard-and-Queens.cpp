#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> board(8, vector<char>(8));
vector<bool> col(8, false);
vector<bool> diag1(15, false);
vector<bool> diag2(15, false);

void search(int y, int &count)
{
    if (y == 8)
    {
        count++;
        return;
    }
    for (int x = 0; x < 8; x++)
    {
        if (col[x] || diag1[x + y] || diag2[x - y + 7] || board[y][x] == '*')
            continue;
        col[x] = diag1[x + y] = diag2[x - y + 7] = 1;
        search(y + 1, count);
        col[x] = diag1[x + y] = diag2[x - y + 7] = 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> board[i][j];
        }
    }
    int count = 0;
    search(0, count);
    cout << count;
    return 0;
}