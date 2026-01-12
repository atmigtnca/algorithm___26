#include <iostream>
using namespace std;
using ll = long long;
int ary[3][100001];
int dp[3][100001];
int t;

int solve(int n) {}

void input()
{
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= 2; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> ary[i][j];
            }
        }
        int rst = solve(n);
        cout << rst << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    input();

    return 0;
}