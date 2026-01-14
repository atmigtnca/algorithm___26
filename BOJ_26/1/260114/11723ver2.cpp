#include <iostream>
#include <string>
using namespace std;
using ll = long long;
int bset;
int m;

void solve()
{
    string ipt;
    int x;
    cin >> ipt;

    if (ipt == "add")
    {
        cin >> x;
        bset |= (1 << (x - 1));
    }
    else if (ipt == "remove")
    {
        cin >> x;
        bset &= (~(1 << (x - 1)));
    }
    else if (ipt == "check")
    {
        cin >> x;
        cout << ((bset >> (x - 1)) & 1) << '\n';
    }
    else if (ipt == "toggle")
    {
        cin >> x;
        bset ^= (1 << (x - 1));
    }
    else if (ipt == "all")
    {
        bset = 0xfffff;
    }
    else if (ipt == "empty")
    {
        bset = 0;
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