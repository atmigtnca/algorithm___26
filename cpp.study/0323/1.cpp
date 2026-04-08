#include <iostream>
using namespace std;
using ll = long long;

void swap(char& f, char& s, char& t)
{
    char tmp = t;
    t = s;
    s = f;
    f = tmp;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    char a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i < 3; i++)
    {
        swap(a, b, c);
        cout << a << ' ' << b << ' ' << c << '\n';
    }

    return 0;
}