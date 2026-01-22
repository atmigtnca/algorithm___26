#include <algorithm>
#include <iostream>
using namespace std;
using ll = long long;
int heap[100005];
int sze = 0;
int n;

void push(int x) {}

int top() { return heap[1]; }

void pop() {}

void input()
{
    int ipt;
    cin >> n;
    while (n--)
    {
        cin >> ipt;
        if (ipt == 0)
        {
            cout << top() << '\n';
        }
        else
        {
            push(ipt);
            pop();
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    input();

    return 0;
}
