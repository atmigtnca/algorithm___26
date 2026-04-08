#include <iostream>
using namespace std;
using ll = long long;

class Rectangle
{
   private:
    int width;
    int height;

   public:
    Rectangle() : width(0), height(0) {}
    Rectangle(int w, int h) : width(w), height(h) {}
    void setSize(int w, int h)
    {
        width = w;
        height = h;
    }
    int getArea() { return width * height; }
    int getPerimeter() { return 2 * (width + height); }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int w, h;
    cin >> w >> h;

    Rectangle rect(w, h);

    cout << rect.getArea() << '\n';
    cout << rect.getPerimeter() << '\n';

    return 0;
}
