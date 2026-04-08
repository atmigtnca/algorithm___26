// 4로 나눠지는 해는 윤년이다.
// 100으로 나눠지는 해는 윤년이아니다.
// 400으로 나눠지는 해는 윤년이다.

#include <iostream>
using namespace std;
using ll = long long;

bool leap()
{
    int y;
    cin >> y;
    if (!(y % 4))
    {
        if (!(y % 400) || (y % 100))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    bool chk = leap();

    if (chk)
    {
        cout << "Leap Year\n";
    }
    else
    {
        cout << "Not a Leap Year\n";
    }

    return 0;
}