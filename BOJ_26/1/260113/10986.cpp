#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
vector<int> dp;
int n, m, rst = 0;

void solve(int i)
{
    for (int j = 1; j < i; j++)
    {
        int mod = (dp[i] - dp[j - 1]) % m;
        if (!mod)
        {
            rst++;
        }
    }
}

void input()
{
    cin >> n >> m;
    dp.resize(n + 1);
    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        int ipt;
        cin >> ipt;
        dp[i] = (dp[i - 1] + ipt) % m;
        cout << dp[i] << ' ';
        // solve(i);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    input();
    // cout << rst << '\n';

    return 0;
}