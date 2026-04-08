#include <cstring>
#include <iostream>
using namespace std;
using ll = long long;

class NameCard
{
   private:
    char* name;
    char* ID;
    char* phone;

   public:
    NameCard(const char* n, const char* i, const char* p)
    {
        name = new char[strlen(n) + 1];
        ID = new char[strlen(i) + 1];
        phone = new char[strlen(p) + 1];

        strcpy(name, n);
        strcpy(ID, i);
        strcpy(phone, p);
    }

    NameCard(const NameCard& other)
    {
        name = new char[strlen(other.name) + 1];
        ID = new char[strlen(other.ID) + 1];
        phone = new char[strlen(other.phone) + 1];

        strcpy(name, other.name);
        strcpy(ID, other.ID);
        strcpy(phone, other.phone);
    }

    void setInfo(const char* n, const char* i, const char* p)
    {
        delete[] name;
        delete[] ID;
        delete[] phone;

        name = new char[strlen(n) + 1];
        ID = new char[strlen(i) + 1];
        phone = new char[strlen(p) + 1];

        strcpy(name, n);
        strcpy(ID, i);
        strcpy(phone, p);
    }

    void Show()
    {
        cout << "name: " << name << '\n';
        cout << "ID: " << ID << '\n';
        cout << "phone: " << phone << '\n';
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    char name[80], ID[80], phone[80];
    cin >> name >> ID >> phone;

    NameCard man1(name, ID, phone);
    NameCard man2 = man1;

    cin >> name >> ID >> phone;

    man2.setInfo(name, ID, phone);
    man1.Show();
    man2.Show();

    return 0;
}