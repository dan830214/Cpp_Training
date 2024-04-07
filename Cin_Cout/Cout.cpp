#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char str1[2] = "C";
    char str2 = 'T';
    //* char str3[1] = "A"; => 有誤，在 C++ 中" "內含一個結束字元，' '內不包含結束字元。
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    cout << "Set setw(5):" << endl;
    cout << setw(5) << str1 << endl;
    const double PI = 3.141592653;
    cout << "Set setprecision(5):" << endl;
    cout << setprecision(5) << PI << endl;
    cout << "Set setprecision(10):" << endl;
    cout << setprecision(10) << PI << endl;
    cout << "Set setprecision(15):" << endl;
    cout << setprecision(15) << PI << endl;
    return 0;
}