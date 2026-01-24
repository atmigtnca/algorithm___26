#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
int n, b, p, q, r;

struct sce
{
    int b, p, q, r;
};
vector<sce> clmb;

void output()
{
    for (int i = 0; i < 3; i++)
    {
        cout << clmb[i].b << ' ';
    }
    cout << '\n';
}

bool chk(const sce a, const sce b)
{
    int muta = a.p * a.q * a.r;
    int mutb = b.p * b.q * b.r;
    int adda = a.p + a.q + a.r;
    int addb = b.p + b.q + b.r;

    if (muta != mutb)
    {
        return muta < mutb;
    }
    if (adda != addb)
    {
        return adda < addb;
    }
    return a.b < b.b;
}

void input()
{
    cin >> n;
    clmb.reserve(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b >> p >> q >> r;
        clmb.push_back({b, p, q, r});
    }
    sort(clmb.begin(), clmb.end(), chk);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    input();
    output();

    return 0;
}