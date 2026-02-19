#include <iostream>
#include <string>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int x, y;
    cin >> x >> y;
    string rst = to_string(x + y);

    bool zerochk = false;
    for (size_t i = 0; i < rst.size(); i++)
    {
        if (rst[i] == '0')
        {
            zerochk = true;
            break;
        }
    }

    if (!zerochk)
    {
        cout << rst << '\n';
    }
    else
    {
        string tmp;
        for (string::reverse_iterator rit = rst.rbegin(); rit != rst.rend();
             ++rit)
        {
            tmp += *rit;
        }

        int rRst = stoi(tmp);

        cout << rRst << '\n';
    }

    return 0;
}