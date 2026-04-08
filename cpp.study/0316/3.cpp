#include <iostream>
using namespace std;
using ll = long long;

int arithmetic(int a, int b, char oper)
{
    if (oper == '-')
    {
        return a - b;
    }
    else if (oper == '*')
    {
        return a * b;
    }
    else if (oper == '/')
    {
        return a / b;
    }
    return a + b;
}
double arithmetic(double a, double b, char oper)
{
    if (oper == '-')
    {
        return a - b;
    }
    else if (oper == '*')
    {
        return a * b;
    }
    else if (oper == '/')
    {
        return a / b;
    }
    return a + b;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int set;
    cin >> set;

    if (set == 1)
    {
        int a, b;
        char oper;
        cin >> a >> oper >> b;
        cout << arithmetic(a, b, oper) << '\n';
    }
    else
    {
        double a, b;
        char oper;
        cin >> a >> oper >> b;

        cout.setf(ios::fixed, ios::floatfield);
        cout.precision(2);
        cout << arithmetic(a, b, oper) << '\n';
    }

    return 0;
}