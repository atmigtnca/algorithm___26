#include <iostream>
using namespace std;
using ll = long long;

class Speed
{
   private:
    int limitSpeed;
    int curSpeed;
    bool isOn;

   public:
    Speed(int limit) : limitSpeed(limit), curSpeed(0), isOn(false) {}

    void accelerate(int v)
    {
        curSpeed += v;
        updateState();
        printStatus();
    }

    void decelerate(int v)
    {
        curSpeed -= v;
        if (curSpeed < 0) curSpeed = 0;
        updateState();
        printStatus();
    }

    void brake()
    {
        curSpeed = 0;
        updateState();
        printStatus();
    }

   private:
    void updateState()
    {
        if (curSpeed == 0)
            isOn = false;
        else
            isOn = true;
    }

    void printStatus()
    {
        if (isOn)
            cout << "On ";
        else
            cout << "Off ";
        cout << curSpeed << '\n';
        if (curSpeed > limitSpeed)
        {
            cout << "ATTENTION: overspeed!" << '\n';
        }
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int limit;
    cin >> limit;

    Speed car(limit);

    while (true)
    {
        int menu;
        if (!(cin >> menu)) break;

        if (menu == 0)
        {
            break;
        }
        else if (menu == 1)
        {
            int v;
            cin >> v;
            car.accelerate(v);
        }
        else if (menu == 2)
        {
            int v;
            cin >> v;
            car.decelerate(v);
        }
        else if (menu == 3)
        {
            car.brake();
        }
    }

    return 0;
}
