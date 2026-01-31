#include <iostream>
#include <queue>
#include <vector>
using namespace std;
using ll = long long;
int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};
vector<vector<int>> dis, vis, brk_vis;
int n, m;

struct sta
{
    int x;
    int y;
    bool brkn;
};
queue<sta> cur;

void solve()
{
    cur.push({0, 0, 0});
    vis[0][0] = 1;

    while (!cur.empty())
    {
        auto [cy, cx, brk] = cur.front();
        cur.pop();
        for (int i = 0; i < 4; i++)
        {
            int ny = cy + dy[i];
            int nx = cx + dx[i];
            bool nbrk = brk;
            if (ny < 0 || ny >= n || nx < 0 || nx >= m)
            {
                continue;
            }
            if ((dis[ny][nx] == 1 && brk == 1) || vis[ny][nx] != -1)
            {
                continue;
            }
            if (dis[ny][nx] == 1 && nbrk == false)
            {
                nbrk = true;
            }
            cur.push({ny, nx, nbrk});
            vis[ny][nx] = vis[cy][cx] + 1;
        }
    }
}

void input()
{
    char ipt;
    cin >> n >> m;
    dis.resize(n, vector<int>(m));
    vis.resize(n, vector<int>(m, -1));
    brk_vis.resize(n, vector<int>(m, -1));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ipt;
            dis[i][j] = ipt - '0';
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    input();
    solve();
    cout << vis[n - 1][m - 1] << '\n';

    return 0;
}