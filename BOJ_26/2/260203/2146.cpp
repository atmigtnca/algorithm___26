#include <iostream>
#include <queue>
#include <utility>
using namespace std;
using ll = long long;
queue<pair<int, int>> onepoint, cursor;
int dy[] = {1, -1, 0, 0};
int dx[] = {0, 0, 1, -1};
int ary[101][101];
int vis[101][101];
int n;

void bfs()
{
    int minRst = 1e9;
    while (!onepoint.empty())
    {
        int sze = cursor.size();
        while (sze--)
        {
            cursor.pop();
        }
        auto [cy, cx] = onepoint.front();
        onepoint.pop();
        cursor.push({cy, cx});

        int islnum = vis[cy][cx];
        while (!cursor.empty())
        {
            auto [cy, cx] = cursor.front();
            cursor.pop();
            for (int i = 0; i < 4; i++)
            {
                int ny = cy + dy[i];
                int nx = cx + dx[i];
                if (ny < 0 || ny >= n || nx < 0 || nx >= n)
                {
                    continue;
                }
                if (vis[ny][nx] != islnum && vis[ny][nx] != 0)
                {
                    if (vis[cy][cx] < minRst)
                    {
                        minRst = vis[cy][cx];
                        goto EnD;
                    }
                }
                
            }
        }
    EnD:
    }
}

void fndild()
{
    int islnum = 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ary[i][j] && !vis[i][j])
            {
                cursor.push({i, j});
                vis[i][j] = islnum;
                while (!cursor.empty())
                {
                    auto [cy, cx] = cursor.front();
                    cursor.pop();
                    for (int a = 0; a < 4; a++)
                    {
                        int ny = cy + dy[a];
                        int nx = cx + dx[a];
                        if (ny < 0 || ny >= n || nx < 0 || nx >= n)
                        {
                            continue;
                        }
                        if (ary[ny][nx] == 0 || vis[ny][nx] == islnum)
                        {
                            continue;
                        }
                        cursor.push({ny, nx});
                        vis[ny][nx] = islnum;
                    }
                }
                islnum++;
            }
        }
    }
}

void input()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ary[i][j];
            if (ary[i][j])
            {
                onepoint.push({i, j});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    input();
    fndild();
    bfs();

    return 0;
}
