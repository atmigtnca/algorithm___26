#include <iostream>
using namespace std;
using ll = long long;

void foo()
{
    int a = 10;
    int b = 20;
    int c = a + b;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    cout << "start\n";
    foo();
    cout << "end\n";

    return 0;
}