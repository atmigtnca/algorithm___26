#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
using ll = long long;
map<ll, int> card;
int n;

void output()
{
    auto rst =
        max_element(card.begin(), card.end(), [](const auto& a, const auto& b)
                    { return a.second < b.second; });

    cout << rst->first << '\n';
}

void mapinput(ll ipt)
{
    auto cur = card.find(ipt);
    if (cur != card.end())
    {
        (cur->second)++;
    }
    else
    {
        card.insert({ipt, 1});
    }
}

void input()
{
    ll ipt;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ipt;
        mapinput(ipt);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    input();
    output();

    return 0;
}