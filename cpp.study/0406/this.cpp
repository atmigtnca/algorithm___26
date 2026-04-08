#include <cstring>
#include <iostream>

using namespace std;

class SoSimple
{
   private:
    int num;

   public:
    SoSimple(int n) : num(n)
    {
        cout << "num = " << num << ", ";
        cout << "object address = " << this << endl;
    }
    void ShowSimpleData() { cout << num << endl; }
    SoSimple* GetThisPointer() { return this; }
};

int main(void)
{
    SoSimple sim1(100);
    SoSimple* ptr1 = sim1.GetThisPointer();  // 객체 sim1의 시작 주소 반환
    cout << ptr1 << ", ";
    ptr1->ShowSimpleData();

    SoSimple sim2(200);
    SoSimple* ptr2 = sim2.GetThisPointer();  // 객체 sim2의 시작 주소 반환
    cout << ptr2 << ", ";
    ptr2->ShowSimpleData();

    system("pause");  // VC++ 에서만 필요

    return 0;
}
