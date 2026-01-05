#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "A910";
    string b = "145C";
    cout << (a > b) << endl;          // 1 (true)
    cout << (a < b ? b : a) << endl;  // A910 출력
    return 0;
}
