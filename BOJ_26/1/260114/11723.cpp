#include <iostream>
#include <string>
#include <vector>
using namespace std;
using ll = long long;
vector<bool> bset(22, 0);
int m;

void solve()
{
    string ipt;
    int x;
    cin >> ipt;

    if (ipt == "add")
    {
        cin >> x;
        bset[x] = 1;
    }
    else if (ipt == "remove")
    {
        cin >> x;
        bset[x] = 0;
    }
    else if (ipt == "check")
    {
        cin >> x;
        if (bset[x] == 1)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
    }
    else if (ipt == "toggle")
    {
        cin >> x;
        bset[x] = (bset[x] == 0) ? 1 : 0;
    }
    else if (ipt == "all")
    {
        fill(bset.begin(), bset.end(), 1);
    }
    else if (ipt == "empty")
    {
        fill(bset.begin(), bset.end(), 0);
    }
}

void input()
{
    cin >> m;
    while (m--)
    {
        solve();
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    input();

    return 0;
}