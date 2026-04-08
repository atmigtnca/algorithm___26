#include <iostream>
using namespace std;
using ll = long long;

class Account
{
   private:
    static int bnk;
    string name;
    int money;

   public:
    Account(const string& Name, const int& Money) : name(Name), money(Money)
    {
        bnk++;
    }

    static void print_total()
    {
        cout << "num client: " << Account::bnk << '\n';
    }

    ~Account() { bnk--; }
};

int Account::bnk = 0;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    Account::print_total();
    Account kim("kim", 10000);
    Account::print_total();

    {
        Account lee("lee", 20000);
        Account::print_total();
    }
    Account::print_total();

    Account* park = new Account("Park", 50000);
    Account::print_total();
    delete park;
    Account::print_total();
    return 0;
}