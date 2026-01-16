#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using ll = long long;
vector<string> les, lok;
int n, m;

void solve()
{
    sort(les.begin(), les.end());
    sort(lok.begin(), lok.end());
    int minIdx = (n < m) ? n : m;
    for (int i = 0; i < minIdx; i++)
    {
    }
}

void input()
{
    cin >> n >> m;
    les.resize(n), lok.resize(m);
    for (int i = 0; i < n; i++)
    {
        cin >> les[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> lok[i];
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    input();
    solve();

    return 0;
}
