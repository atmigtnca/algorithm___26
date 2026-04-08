#include <iostream>
using namespace std;
using ll = long long;

class Time
{
   private:
    int H, M, S;

   public:
    Time(int hour = 0, int min = 0, int sec = 0) : H(hour), M(min), S(sec) {};

    void print()
    {
        cout << H << "h " << M << "m " << S << "s\n";
        cout << ((3600 * H) + (60 * M) + S) << "s\n";
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int hour, min, sec;
    cin >> hour >> min >> sec;
    Time t1;
    Time t2(hour);
    Time t3(hour, min);
    Time t4(hour, min, sec);
    t1.print();
    t2.print();
    t3.print();
    t4.print();

    return 0;
}