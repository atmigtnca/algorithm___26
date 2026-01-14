#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int S = 0b00010010;
    int idx = 1;

    S &= ~(1 << idx);
    bitset<8> binary(S);
    cout << binary << '\n';

    return 0;
}