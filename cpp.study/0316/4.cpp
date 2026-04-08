#include <iostream>
using namespace std;
using ll = long long;

int min(int arr[], int n)
{
    int min_n = 1e9;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min_n)
        {
            min_n = arr[i];
        }
    }
    return min_n;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n, i;
    int arr[100];
    cin >> n;
    for (i = 0; i < n; i++) cin >> arr[i];
    int min_num = min(arr, n);
    cout << min_num << '\n';

    return 0;
}
