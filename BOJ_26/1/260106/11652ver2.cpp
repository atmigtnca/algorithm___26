#include <iostream>
#include <map>
#include <vector>
using namespace std;
using ull = unsigned long long;
vector<pair<string, int>> rst;
map<string, int> card;

bool mapsort(pair<string, int> a, pair<string, int> b)
{
    if (a.first[0] == '-' && b.first[0] == '-')
    {
        a.first.erase(a.first.begin()), b.first.erase(b.first.begin());
        ull numA = stoull(a.first);
        ull numB = stoull(b.first);
        return numA > numB;
    }

    ull numA = stoull(a.first);
    ull numB = stoull(b.first);
    return numA < numB;
}

void vec()
{
    rst.assign(card.begin(), card.end());
    sort(rst.begin(), rst.end(), mapsort);
}

void mapipt(string& ipt)
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
    string ipt;
    int n;
    cin >> n;
    while (n--)
    {
        cin >> ipt;
        mapipt(ipt);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    input();
    vec();
    for (auto mem : rst)
    {
        cout << mem.first << ' ' << mem.second << '\n';
    }

    return 0;
}