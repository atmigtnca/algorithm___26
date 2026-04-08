#include <iostream>
using namespace std;
using ll = long long;

class Point
{
   private:
    int x;
    int y;

   public:
    Point()
    {
        x = 0;
        y = 0;
    }

    void set(int nx, int ny)
    {
        x = nx;
        y = ny;
    }

    void move(int a, int b)
    {
        x += a;
        y += b;
    }

    void print() const { cout << '[' << x << ", " << y << "]\n"; }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    Point p;

    int menu;

    while (1)
    {
        cin >> menu;

        if (menu == 0)
        {
            break;
        }
        else if (menu == 1)
        {
            int x, y;
            cin >> x >> y;
            p.set(x, y);
        }
        else if (menu == 2)
        {
            int a, b;
            cin >> a >> b;
            p.move(a, b);
        }
        else if (menu == 3)
        {
            p.print();
        }
    }

    return 0;
}
