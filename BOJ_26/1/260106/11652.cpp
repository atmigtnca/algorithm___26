#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
using namespace std;
using ll = long long;
vector<string> crd;   // 숫자 기록
vector<int> crd_cnt;  // 숫자 개수 측정
int n;

void crdfnc(string& ipt)
{
    auto cur = find(crd.begin(), crd.end(), ipt);
    if (cur != crd.end())
    {
        int idx = distance(crd.begin(), cur);
        crd_cnt[idx]++;
    }
    else
    {
        int iptidx = crd.size();
        crd.push_back(ipt);
        crd_cnt[iptidx]++;
    }
}

void input()
{
    string ipt;
    cin >> n;
    crd.reserve(n + 1);
    crd_cnt.resize(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> ipt;
        crdfnc(ipt);
    }
}

void output()
{
    auto cur = max_element(crd_cnt.begin(), crd_cnt.end());
    int idx = distance(crd_cnt.begin(), cur);
    cout << crd[idx] << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    input();
    output();

    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << ' ' << crd_cnt[i] << '\n';
    // }

    return 0;
}

// pair를 써도 시간초과가 뜰 듯.
