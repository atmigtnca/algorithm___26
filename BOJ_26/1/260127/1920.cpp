#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
vector<int> ary;
int n;

void solve()
{
    sort(ary.begin(), ary.end());
    int m;
    cin >> m;
    while (m--)
    {
        int ipt;
        cin >> ipt;
        cout << binary_search(ary.begin(), ary.end(), ipt) << '\n';
    }
}

void input()
{
    cin >> n;
    ary.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ary[i];
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