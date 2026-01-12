#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
vector<int> ary, aryCnt;
int n;

void input()
{
    cin >> n;
    ary.resize(n);
    aryCnt.resize(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> ary[i];
    }
}

void cntfnc()
{
    for (int i = n - 1; i >= 0; i--)
    {
        int cur = ary[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (cur > ary[j])
            {
                aryCnt[i]++;
                cur = ary[j];
            }
        }
    }
    // for (auto mem : aryCnt)
    // {
    //     cout << mem << ' ';
    // }
    // cout << '\n';
    auto rst = max_element(aryCnt.begin() + 1, aryCnt.end());
    cout << *rst + 1 << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    input();
    cntfnc();

    return 0;
}