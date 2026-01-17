#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
int diV[2] = {2, 5};
int rst[2] = {};
int N;

void solve(int n)
{
    int num = n;
    for (int i = 0; i < 2; i++)
    {
        while (1)
        {
            int chk = num % diV[i];
            if (!chk)
            {
                num /= diV[i];
                rst[i]++;
            }
            else
            {
                break;
            }
        }
    }
}

void input()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        solve(i);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    input();
    cout << (rst[0] < rst[1] ? rst[0] : rst[1]) << '\n';

    return 0;
}