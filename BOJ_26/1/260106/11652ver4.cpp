#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
vector<ll> card;
int n;

int fnc()
{
    int maxCnt, maxNum, cnt;
    cin >> n;
    card.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> card[i];
    }
    sort(card.begin(), card.end());

    maxCnt = 0, maxNum = card[0], cnt = 1;

    for (int i = 1; i < n; i++)
    {
        if (card[i] == card[i - 1])
        {
            cnt++;
        }
        else
        {
            if (cnt > maxCnt)
            {
                maxCnt = cnt;
                maxNum = card[i - 1];
            }
            cnt = 1;
        }
    }

    return maxNum;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    cout << fnc() << '\n';

    return 0;
}