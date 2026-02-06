#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
vector<int> ary;
int n, m;

void solve()
{
    int ecur = 0;
    int rst = 2e9;

    for (int scur = 0; scur < n; scur++)
    {
        while (ecur < n && ary[ecur] - ary[scur] < m)
        {
            ecur++;
        }
        if (ecur == n)
        {
            break;
        }
        rst = min(rst, ary[ecur] - ary[scur]);
    }
    cout << rst << '\n';
}

void input()
{
    cin >> n >> m;
    ary.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ary[i];
    }
    sort(ary.begin(), ary.end());
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    input();
    solve();

    return 0;
}