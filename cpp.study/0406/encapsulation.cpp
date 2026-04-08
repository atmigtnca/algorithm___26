#include <iostream>
using namespace std;

class SnivelCap
{
   public:
    void Take() const { cout << "콧물이 치료됩니다.\n"; }
};

class SneezeCap
{
   public:
    void Take() const;
};

void SneezeCap::Take() const { cout << "재치기가 멎습니다.\n"; }

class SnuffleCap
{
   public:
    void Take() const { cout << "코가 뻥 뚤립니다.\n"; }
};

class Contact600
{
   private:
    SneezeCap zcap;
    SnivelCap scap;
    SnuffleCap ncap;

   public:
    void Take() const
    {
        scap.Take();
        zcap.Take();
        ncap.Take();
    }
};

class ColdPatient
{
   public:
    void tackContact600(const Contact600& cap) const { cap.Take(); }
};

int main()
{
    Contact600 cap;
    ColdPatient sufferer;

    sufferer.tackContact600(cap);

    return (0);
}
