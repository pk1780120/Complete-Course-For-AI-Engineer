// Question 1 : What’ll be the output of the following programs :
#include <iostream>
using namespace std;
int main()
{
    /*//qs.1
    int x = 2, y = 5;
    int exp1 = (x * y / x);
    int exp2 = (x * (y / x));
    cout << exp1 << ",";//5
    cout << exp2 << "\n";//4*/

    /*//qs:B.
    int x = 10, y = 5;
    int exp1 = (y * (x / y + x / y));
    int exp2 = (y * x / y + y * x / y);
    cout << exp1 << " ";//20
    cout << exp2 << "\n";//20*/

    // qs:C
    int x = 200, y = 50, z = 100;
    if (x > y && y > z)
    {
        cout << "Hello \n";//FALSE 
    }
    if (z > y && z < x)
    {
        cout << "C++ \n";//C++
    }
    if ((y + 200) < x && (y + 150) < z)
    {
        cout << "Hello C++ \n";//FALSE
    }
    return 0;
}
