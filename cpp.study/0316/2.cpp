#include <iostream>
using namespace std;
using ll = long long;

int sum(int n)
{
    int all = 0;
    while (n--)
    {
        int tmp;
        cin >> tmp;
        all += tmp;
    }
    return all;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int a;
    cin >> a;
    cout << sum(a + 1) << '\n';

    return 0;
}