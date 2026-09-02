#include <iostream>

using namespace std;
class test
{
    int a;
    int b;

public:
    // test(int i, int j) : a(i), b(j)
    // test(int i, int j) : a(i), b(i + j)
    // test(int i, int j) : a(i), b(2 * j)
    // test(int i, int j) : a(i), b(a+j)
    // test(int i, int j) : b(j), a(i+b) //-->this will be create problems because a will be initiallized first
    test(int i, int j)
    {
        a = i;
        b = j;
        cout << " constructor exected " << endl;
        cout << " value of a is " << a << endl;
        cout << " value of b is " << b << endl;
    }
};

int main()
{
    test(4, 6);
    return 0;
}