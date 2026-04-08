#include <iostream>
using namespace std;
using ll = long long;

class Point
{
   private:
    int X, Y;

   public:
    Point(int x, int y) : X(x), Y(y) {}
    Point(const Point& other) : X(other.X), Y(other.Y) {}

    void print() { cout << '(' << X << ", " << Y << ")\n"; }
    void move(int dx, int dy)
    {
        X += dx;
        Y += dy;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int x, y, a, b;
    cin >> x >> y;

    Point p1(x, y);
    Point p2 = p1;

    p2.print();

    cin >> a >> b;
    p2.move(a, b);

    p2.print();

    return 0;
}
